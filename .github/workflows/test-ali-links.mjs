import { readFile } from 'fs/promises';
import { By, Builder } from 'selenium-webdriver';
import Firefox from 'selenium-webdriver/firefox.js'

const links = [];
let driver;

const bomDocument = './docs/bom-requirements.md';
const bomDocumentPathForLocalTesting = '../../docs/bom-requirements.md';

const content = async(file) => {
    return await readFile(file, 'utf8')
}

const search = async (item) => {
    await driver.get('https://s.click.aliexpress.com/e/_' + item);
    let notFound = await driver.findElements(By.className('not-found-page'))    // Product not found
    let homepage = await driver.findElements(By.className('new-affiliate'))     // Link points to homepage
    const results = await Promise.all([notFound, homepage])

    return results.flat(Infinity);
}

content(bomDocument)
    .then(
        result => {
            const sanitizedMD = result.split('/_')
            // remove stuff that doesn't include links
            sanitizedMD.shift();
            sanitizedMD.forEach((el) => {
                links.push(el.split(')')[0])
            })
        }
    )
    .finally(
        async () => {
            
            const options = new Firefox.Options();
            options.addArguments('--headless');

            driver = new Builder()
                .forBrowser('firefox')
                .setFirefoxOptions(options)
                .build();

            // Test scraped aliexpress links from bom-doc
            links.every(async el => {
                const result = await search(el);

                console.log(result)

                if (result.length > 0) {
                    throw new Error(`product ${el} is a broken link`, content)
                }
            });
        }
    );
