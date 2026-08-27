/* FUN_2c555ee8 @ 0x2c555ee8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c555ee8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined8 uVar5;
  
  uVar1 = FUN_2c48e738();
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  else {
    FUN_2c48e5b4(uVar1,_LAB_2c555ff4,*(undefined4 *)(param_1 + 0x34),*(int *)(param_1 + 0x38),
                 param_4);
    iVar3 = *(int *)(param_1 + 0x20);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x50);
  }
  else {
    FUN_2c48e5b4(uVar1,_LAB_2c555ff8,*(undefined4 *)(param_1 + 0x1c),iVar3,param_4);
    iVar3 = *(int *)(param_1 + 0x50);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x68);
  }
  else {
    FUN_2c48e5b4(uVar1,_LAB_2c555ffc,*(undefined4 *)(param_1 + 0x4c),iVar3,param_4);
    iVar3 = *(int *)(param_1 + 0x68);
  }
  if (iVar3 != 0) {
    FUN_2c48e5b4(uVar1,_LAB_2c556000,*(undefined4 *)(param_1 + 100),iVar3,param_4);
  }
  FUN_2c48e4c8(uVar1,_LAB_2c555fe8,*(undefined1 *)(param_1 + 0x98));
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_2c48e5b4(uVar1,_LAB_2c55600c,*(undefined4 *)(param_1 + 0x9c));
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_2c48e5b4(uVar1,_LAB_2c556008,*(undefined4 *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar2 = FUN_2c48e738();
    FUN_2c48e474(uVar1,_LAB_2c556004,uVar2);
    for (piVar4 = *(int **)(param_1 + 0x84); piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
      FUN_2c48e5b4(uVar2,piVar4[1],piVar4[7]);
    }
  }
  uVar5 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x99),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar5,uVar1,_LAB_2c555fec);
  coprocessor_function2(0xb,0,0,in_cr0,in_cr0,in_cr7);
  FUN_2c48e518(0,uVar1,_LAB_2c555ff0);
  return uVar1;
}

