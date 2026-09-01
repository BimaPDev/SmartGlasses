/* FUN_100d48c0 @ 0x100d48c0 */

undefined4 FUN_100d48c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0,param_3,param_4,param_4);
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100d4900 - DAT_100d48fc) * 0x20 & 0xff00U | 0x1e00021,DAT_100d4908,
                 DAT_100d4904);
    uVar2 = 0xffffffed;
  }
  else {
    *(byte *)(iVar1 + 0x38) = *(byte *)(iVar1 + 0x38) & 0xfe;
    uVar2 = 0;
  }
  return uVar2;
}

