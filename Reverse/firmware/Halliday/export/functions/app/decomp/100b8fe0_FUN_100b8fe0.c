/* FUN_100b8fe0 @ 0x100b8fe0 */

int FUN_100b8fe0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_100a5b78((DAT_100b901c - DAT_100b9020) * 0x20 & 0xff00U | 0x300031,DAT_100b9028,DAT_100b9024,
               param_1[3],param_4);
  *param_1 = *param_1 + '\x01';
  iVar1 = FUN_1007378c(DAT_100b902c,param_1,0x4a);
  return -(uint)(iVar1 != 0);
}

