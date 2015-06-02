/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/8s/rr3_1wfn0_b6l8twczjqmxqw0000gn/T/formalin14/umeng-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/8s/rr3_1wfn0_b6l8twczjqmxqw0000gn/T/formalin14/umeng-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.biddecor.android.umeng.UmengModule.h"
#include "com.biddecor.android.umeng.ExampleProxy.h"


#line 14 "/private/var/folders/8s/rr3_1wfn0_b6l8twczjqmxqw0000gn/T/formalin14/umeng-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 2, duplicates = 0 */

class UmengBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
UmengBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
UmengBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 38,
      MAX_WORD_LENGTH = 39,
      MIN_HASH_VALUE = 38,
      MAX_HASH_VALUE = 39
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 16 "/private/var/folders/8s/rr3_1wfn0_b6l8twczjqmxqw0000gn/T/formalin14/umeng-generated/KrollGeneratedBindings.gperf"
      {"com.biddecor.android.umeng.UmengModule", ::com::biddecor::android::umeng::UmengModule::bindProxy, ::com::biddecor::android::umeng::UmengModule::dispose},
#line 17 "/private/var/folders/8s/rr3_1wfn0_b6l8twczjqmxqw0000gn/T/formalin14/umeng-generated/KrollGeneratedBindings.gperf"
      {"com.biddecor.android.umeng.ExampleProxy", ::com::biddecor::android::umeng::umeng::ExampleProxy::bindProxy, ::com::biddecor::android::umeng::umeng::ExampleProxy::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/8s/rr3_1wfn0_b6l8twczjqmxqw0000gn/T/formalin14/umeng-generated/KrollGeneratedBindings.gperf"

