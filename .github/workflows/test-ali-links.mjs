import { readFile } from 'fs/promises';
import { By, Builder } from 'selenium-webdriver';
import firefox from 'selenium-webdriver/firefox.js'

const links = [];
let driver;

const content = async(file) => {
    return await readFile(file, 'utf8')
}

const search = async (item) => {
    await driver.get('https://s.click.aliexpress.com/e/_' + item);
    return await driver.findElements(By.className('not-found-page'))
}

content('./instructions/bom-requirements.md')
    .then(
        result => {
            const sanitizedMD = result.split('/_')
            sanitizedMD.shift(); // remove stuff that doesn't include links
            sanitizedMD.forEach((el) => {
                links.push(el.split(')')[0])
            })
        }
    )
    .finally(
        async () => {
            driver = new Builder()
                .forBrowser('firefox')
                .setFirefoxOptions(new firefox.Options().headless())
                .build();

            // Test scraped aliexpress links from bom-doc
            links.every(async el => {
                const result = await search(el);

                if (result.length > 0) {
                    throw new Error(`product ${el} is a broken link`, content)
                }
            });
        }
    );
