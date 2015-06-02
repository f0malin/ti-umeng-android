# ti-umeng-android

This is a titanium module for Umeng(www.umeng.com) analytics service, on android platform.

h2. Usage

<pre>
git clone https://github.com/formalin14/ti-umeng-android.git
cd ti-umeng-android
cd android
ant
unzip -o dist/com.biddecor.android.umeng-android-1.0.0.zip -d ~/Library/Application\ Support/Titanium/
</pre>

Then add module in your tiapp.xml with studio or edit directly :

<pre>
<ti:app>
    <modules>
        <module platform="android">com.biddecor.android.umeng</module>
    </modules>
</ti:app>
</pre>

At the beginning of your app.js
<pre>
var umeng;
if (Ti.Platform.osname == "android") {
    umeng = require('com.biddecor.android.umeng');
    umeng.initSetup("666bce9767ee8efdeb0035d9");    // change to your umeng appkey
}
</pre>

At anywhere you want to start your session, call sessionResume():
<pre>
umeng.sessionResume();
</pre>

And where you like to stop your session, call sessionPause():
<pre>
umeng.sessionPause();
</pre>

Somewhere to come in a page(view):
<pre>
umeng.pageStart(pageName);
</pre>

When the page move out or be covered with other page:
<pre>
umeng.pageEnd(pageName);
</pre>

Enjoy! :)


