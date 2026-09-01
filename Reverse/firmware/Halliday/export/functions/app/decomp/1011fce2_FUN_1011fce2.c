/* FUN_1011fce2 @ 0x1011fce2 */

void FUN_1011fce2(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 *puVar4;
  
  if (param_2 - 2U < 2) {
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    iVar2 = FUN_1011a8f2();
    if (iVar2 != 0) {
      bVar1 = *(byte *)((int)puVar4 + 0x47);
      if ((bVar1 & 1) == 0) {
        *(byte *)((int)puVar4 + 0x47) = bVar1 | 1;
        uVar3 = thunk_FUN_10115958();
        puVar4[2] = uVar3;
        FUN_1011fc94(puVar4,1);
        FUN_1013cbaa(puVar4 + 4,extraout_r1,*puVar4,bVar1 & 1);
        return;
      }
    }
  }
  return;
}

