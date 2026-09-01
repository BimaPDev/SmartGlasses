/* FUN_100722b0 @ 0x100722b0 */

undefined4 FUN_100722b0(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [64];
  
  pcVar1 = DAT_100722b8;
  FUN_1011d2d4(auStack_50,param_1,(int)DAT_100722b8[1]);
  FUN_1011d2d4(auStack_50 + *pcVar1 * 4,param_1 + pcVar1[1]);
  iVar2 = FUN_1011c930(auStack_50,pcVar1 + 0x44,0x10);
  if (iVar2 == 0) {
    uVar3 = 0xfffffffc;
  }
  else {
    uVar3 = FUN_1011d312(auStack_50,pcVar1);
  }
  return uVar3;
}

