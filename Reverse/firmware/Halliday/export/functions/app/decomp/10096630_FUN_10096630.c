/* FUN_10096630 @ 0x10096630 */

void FUN_10096630(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10095250(param_2);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    uVar2 = FUN_10094280(*(undefined4 *)(param_1 + 0x2c),iVar1 + 1,DAT_10096684);
  }
  else {
    uVar2 = FUN_10094254(iVar1 + 1,DAT_10096684);
  }
  FUN_100952c4(param_2,uVar2);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
  FUN_1008964c(param_1);
  FUN_10125af4(param_1);
  return;
}

