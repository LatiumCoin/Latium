**Latium (LAT)**

www.latium.cc

Latium.conf should be placed in the Latium data folder:

Windows: %APPDATA%\Latium\Latium.conf
Linux: ~/.Latium/Latium.conf
Mac: ~/Library/Application Support/Latium/Latium.conf

************************************************************************
FAQ
************************************************************************
FAQ
1.What is PoS?
PoS: Proof of Stake.
http://en.wikipedia.org/wiki/Proof-of-stake

2. what is the line Stake in wallet?
This is for the PoS blocks. Once a PoS block generated, some of your coins plus the generated interests will be moved to "stake", it is like "immature" for PoW. It will take 48 blocks to mature, after maturing the coins plus interest will be added back to your balance.

3. what does that mean in the wallet : Minting suspended due to locked wallet?
This says you can not mine due to an encrypted wallet.
you need to unlock the wallet in order to mine (for example for PoS blocks):
latiumd -daemon
latiumd walletpassphrase <passphrase> <unlock_duration_in_seconds> true

4. Do I have to let my wallet open to get PoS coins?
PoS will be generated after at least 1 hour of holding the coins in your wallet. You don't need to keep the wallet open all the time. The coin-days accumulated in your wallet will not be lost. The next time when you open the wallet client, the internal miner will start automatically and if the coin holding period meets certain requirements the pos blocks will be generated based on the coin-days in your wallet.

5. How often do I have to open the wallet in order to get PoS coins?
See above. You don't need to open wallet all the time, your coin-days accumulated in the wallet will not be lost.

6. You said 50% interest for the first 90 days, 20% for the remainder of that year and 5% every year after the initial year?
PoS blocks will be generated after you hold some coins in your wallet for a certain period of time. For LATIUM, the minimum requirement is 1 day. If you move the coins around (for example send to another wallet and then send them back), the time will reset for the coins you moved.

8. Are the PoS generated coins eligible for new PoS block generations?
Yes. After maturity (48 blocks), the coins will move from "Stake" to "Balance". Once the PoS generated coins in "balance", they will be the same as all other coins, and are eligible for future PoS generations.

9. What will be the total PoS coin amount generated?
The PoS generation for the first 90 days of the year is (50%), for the remainder of the initial year is (20%), and subsequent years will be (5%). If maximum PoS generated (meaning all coins mined held), the total amount of PoS coins created is determined by amount of coins held. ***(Total amount of coins held) x (The previous stated interest rates) = Total PoS coins generated****. Due to LATIUM's unique distribution method, we anticipate a very small amount of PoS coins generated every year. These numbers will be updated regularly on our website, www.Latium.cc

10. When I transfer some of the coins from my LATIUM wallet, are they the newest coins or does it disrupt the proof of stake process of my older coins?
Any coins "moved" will have the PoS time (coin-day) reset for them. It will not affect other "unmoved" coins in the wallet. The PoS will be generated if there are some coins in the wallet satisfying minimum requirements and the amount generated will be based on the coin-day of the total eligible coins have in your wallet.


