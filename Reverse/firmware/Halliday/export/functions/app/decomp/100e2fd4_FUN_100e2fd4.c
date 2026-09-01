/* FUN_100e2fd4 @ 0x100e2fd4 */

bool FUN_100e2fd4(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 << 3 < 0) {
    bVar1 = false;
  }
  else {
    uVar2 = FUN_1011ea10(DAT_100e2ff8);
    iVar3 = FUN_1011ea30(param_2,DAT_100e2ff8,uVar2);
    bVar1 = iVar3 == 0;
  }
  return bVar1;
}

