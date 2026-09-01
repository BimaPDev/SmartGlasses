/* FUN_100f9340 @ 0x100f9340 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100f9340(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  
  if (param_1 == 0) {
    return 0x23;
  }
  iVar5 = *(int *)(param_1 + 0x60);
  if (iVar5 == 0) {
    return 6;
  }
  iVar8 = *(int *)(*(int *)(iVar5 + 0xc) + 0x2c);
  if (iVar8 < 1) {
    if (iVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x100f9438);
      _Reset = param_1;
      (*pcVar6)();
    }
    iVar5 = 6;
LAB_100f93d8:
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
    }
    return iVar5;
  }
  iVar5 = *(int *)(iVar5 + 8);
  puVar1 = (undefined4 *)(**(code **)(iVar5 + 4))(iVar5,iVar8);
  if (puVar1 == (undefined4 *)0x0) {
    iVar5 = 0x40;
    goto LAB_100f93d8;
  }
  FUN_1011ea48(puVar1,0,iVar8);
  puVar9 = *(undefined4 **)(param_1 + 0x60);
  uVar4 = puVar9[1];
  iVar10 = puVar9[2];
  iVar8 = puVar9[3];
  pcVar6 = *(code **)(iVar10 + 4);
  puVar1[1] = param_1;
  *puVar1 = uVar4;
  piVar2 = (int *)(*pcVar6)(iVar10,0x2c);
  if (piVar2 == (int *)0x0) {
LAB_100f940a:
    iVar8 = 0x40;
  }
  else {
    FUN_1011ea48(piVar2,0,0x2c);
    puVar7 = (uint *)*puVar9;
    puVar1[0x27] = piVar2;
    if ((*puVar7 & 0x200) == 0) {
      piVar3 = (int *)(**(code **)(iVar10 + 4))(iVar10,0x60);
      if (piVar3 == (int *)0x0) goto LAB_100f940a;
      FUN_1011ea48(piVar3 + 1,0,0x5c);
      *piVar3 = iVar10;
      *piVar2 = (int)piVar3;
    }
    if ((*(code **)(iVar8 + 0x40) == (code *)0x0) ||
       (iVar8 = (**(code **)(iVar8 + 0x40))(puVar1), iVar8 == 0)) {
      puVar1[2] = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 **)(param_1 + 0x54) = puVar1;
      if (param_2 != (int *)0x0) {
        *param_2 = (int)puVar1;
      }
      return 0;
    }
  }
  FUN_100f8a54(puVar1);
  (**(code **)(iVar5 + 8))(iVar5,puVar1);
  return iVar8;
}

