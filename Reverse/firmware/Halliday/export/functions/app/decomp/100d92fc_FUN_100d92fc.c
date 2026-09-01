/* FUN_100d92fc @ 0x100d92fc */

undefined4 FUN_100d92fc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  
  iVar1 = FUN_100d3350();
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100d9340 - DAT_100d9344) * 0x20 & 0xff00U | 0xda0011,DAT_100d934c,DAT_100d9348
                 ,DAT_100d9344,in_r3);
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_10136444();
    uVar3 = FUN_100d47a4(0);
    FUN_10136462(uVar2);
  }
  return uVar3;
}

