# ti-umeng-android

This is a titanium module for Umeng(www.umeng.com) analytics service, on android platform.

## Usage

```bash
git clone https://github.com/formalin14/ti-umeng-android.git
cd ti-umeng-android
cd android
ant
unzip -o dist/com.biddecor.android.umeng-android-1.0.0.zip -d ~/Library/Application\ Support/Titanium/
```

Then add module in your tiapp.xml with studio or edit directly :

```xml
<ti:app>
    <modules>
        <module platform="android">com.biddecor.android.umeng</module>
    </modules>
</ti:app>
```

At the beginning of your app.js
```javascript
var umeng;
if (Ti.Platform.osname == "android") {
    umeng = require('com.biddecor.android.umeng');
    umeng.initSetup("666bce9767ee8efdeb0035d9");    // change to your umeng appkey
}
```

At anywhere you want to start your session, call sessionResume():
```javascript
umeng.sessionResume();
```

And where you like to stop your session, call sessionPause():
```javascript
umeng.sessionPause();
```

Somewhere to come in a page(view):
```javascript
umeng.pageStart(pageName);
```

When the page move out or be covered with other page:
```javascript
umeng.pageEnd(pageName);
```

Enjoy! :)


