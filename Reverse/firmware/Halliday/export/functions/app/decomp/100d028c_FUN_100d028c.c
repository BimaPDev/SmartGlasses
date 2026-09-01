/* FUN_100d028c @ 0x100d028c */

undefined4 FUN_100d028c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  undefined4 local_30;
  
  FUN_1013cb84(param_1 + 0x40);
  iVar5 = param_1[0x37];
  if (iVar5 == 0) {
    FUN_100a5b78(DAT_100d037c | (DAT_100d0378 - DAT_100d0374) * 0x20 & 0xff00U,DAT_100d0384,
                 DAT_100d0380);
    pcVar7 = (code *)0x0;
  }
  else if (iVar5 == DAT_100d0388) {
    pcVar7 = (code *)0x0;
    param_1[0x37] = 0;
  }
  else {
    local_30 = *(undefined4 *)(iVar5 + 0x18);
    pcVar7 = *(code **)(iVar5 + 4);
    *(undefined4 *)(iVar5 + 4) = 0;
    FUN_100d0268(iVar5);
    param_1[0x37] = 0;
  }
  iVar5 = *param_1;
  puVar1 = (undefined4 *)FUN_10134df4(iVar5 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = *(int **)(iVar5 + 0x28);
    if ((piVar3 != (int *)0x0) && (piVar4 = piVar3 + -0x4d, piVar4 != (int *)0x0)) {
      piVar3 = (int *)*piVar3;
      if (piVar3 != (int *)0x0) {
        piVar3 = piVar3 + -0x4d;
      }
      while( true ) {
        piVar6 = piVar3;
        if ((piVar4[0x37] == 0) &&
           ((iVar2 = FUN_100cf698(piVar4,puVar1), -1 < iVar2 ||
            (puVar1 == (undefined4 *)piVar4[0x37])))) goto LAB_100d0344;
        if (piVar6 == (int *)0x0) break;
        piVar4 = piVar6;
        piVar3 = (int *)0x0;
        if ((piVar6 != (int *)0xfffffecc) && (piVar3 = (int *)piVar6[0x4d], piVar3 != (int *)0x0)) {
          piVar3 = piVar3 + -0x4d;
        }
      }
    }
    *puVar1 = *(undefined4 *)(iVar5 + 4);
    *(undefined4 **)(iVar5 + 4) = puVar1;
    if (*(int *)(iVar5 + 8) == 0) {
      *(undefined4 **)(iVar5 + 8) = puVar1;
    }
  }
LAB_100d0344:
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined4 *)*param_1,param_4,param_2,param_3,local_30);
  }
  return 0;
}

