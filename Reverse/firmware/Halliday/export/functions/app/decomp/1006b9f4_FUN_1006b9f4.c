/* FUN_1006b9f4 @ 0x1006b9f4 */

undefined4 FUN_1006b9f4(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  piVar9 = param_1;
  puVar10 = param_3;
  uVar2 = FUN_1011ea10(param_2);
  FUN_1006b9c8(0xffffffff,0xffffffff);
  piVar1 = DAT_1006ba80;
  piVar6 = (int *)*DAT_1006ba80;
  if (piVar6 == DAT_1006ba80) {
    piVar6 = (int *)0x0;
  }
  uVar5 = 0;
  piVar8 = (int *)0x0;
  for (; piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
    uVar7 = piVar6[6];
    if ((((uVar5 <= uVar7) && (uVar7 <= uVar2)) &&
        ((uVar7 < 2 || ((*(char *)(param_2 + uVar7) == '/' || (*(char *)(param_2 + uVar7) == '\0')))
         ))) && (iVar4 = FUN_1011ea20(param_2,piVar6[3],uVar7,uVar5,piVar9,uVar5,puVar10),
                iVar4 == 0)) {
      uVar5 = uVar7;
      piVar8 = piVar6;
    }
    if (piVar6 == (int *)piVar1[1]) break;
  }
  FUN_1006b9bc();
  if (piVar8 == (int *)0x0) {
    uVar3 = 0xfffffffe;
  }
  else {
    *param_1 = (int)piVar8;
    if (param_3 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      *param_3 = *(undefined4 *)((int)piVar8 + 0x18);
    }
  }
  return uVar3;
}

