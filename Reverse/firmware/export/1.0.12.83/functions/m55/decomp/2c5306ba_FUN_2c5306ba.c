/* FUN_2c5306ba @ 0x2c5306ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5306ba(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = _LAB_2c530728;
  if (*_LAB_2c530728 == 0) {
    FUN_2c4723c4();
    *piVar6 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x10);
  uVar1 = *(undefined1 *)(param_1 + 5);
  *puVar2 = _DAT_2c53072c;
  *(undefined1 *)((int)puVar2 + 5) = uVar1;
  *(undefined1 *)(puVar2 + 1) = 0x12;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar6 = (int *)puVar2[3];
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  if ((piVar6 != (int *)0x0) && (iVar5 = piVar6[1], piVar6[1] = iVar5 + -1, iVar5 + -1 == 0)) {
    (**(code **)(*piVar6 + 8))(piVar6);
    iVar5 = piVar6[2];
    piVar6[2] = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      (**(code **)(*piVar6 + 0xc))(piVar6);
    }
  }
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_1 + 4);
  FUN_2c530264(puVar2);
  return 0;
}

