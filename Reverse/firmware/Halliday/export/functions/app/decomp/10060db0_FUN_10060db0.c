/* FUN_10060db0 @ 0x10060db0 */

void FUN_10060db0(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 local_1c;
  undefined2 local_1a;
  ushort local_18;
  
  param_1 = param_1 | 0x80;
  iVar1 = FUN_10043a8c(param_1);
  if (iVar1 != 0) {
    FUN_100a5b78(DAT_10060e08 | (DAT_10060e04 - DAT_10060e00) * 0x20 & 0xff00U,DAT_10060e10,
                 DAT_10060e0c,param_1,param_2);
    if ((code *)*DAT_10060e14 != (code *)0x0) {
      local_18 = (ushort)param_2 | 0x80;
      local_1c = (undefined2)param_1;
      local_1a = 0;
      (*(code *)*DAT_10060e14)(0,&local_1c);
    }
  }
  return;
}

