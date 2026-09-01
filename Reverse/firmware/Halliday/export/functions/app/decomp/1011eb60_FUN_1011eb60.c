/* FUN_1011eb60 @ 0x1011eb60 */

uint * FUN_1011eb60(undefined2 *param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = (uint)(ushort)param_1[1];
  uVar6 = (uint)(ushort)param_1[2];
  uVar4 = (uint)(ushort)param_1[5];
  uVar5 = uVar3;
  if (uVar3 <= uVar6) {
    uVar5 = uVar4 + uVar3;
  }
  uVar5 = (uVar4 - 1) - ((uVar5 - 1) - uVar6);
  if (uVar5 == 0) {
LAB_1011eb80:
    puVar2 = (uint *)0x0;
  }
  else {
    uVar1 = param_1[6];
    puVar2 = (uint *)((ushort)param_1[4] + uVar3 + 0x2ff18000);
    if (uVar1 == 0) {
      if (uVar4 - uVar3 <= param_2) {
        param_2 = uVar4 - uVar3;
      }
      if (uVar5 <= param_2) {
        param_2 = uVar5;
      }
    }
    else {
      if (*puVar2 == 0) {
        param_1[1] = 0;
        *param_1 = 0;
        if (uVar6 == 0) goto LAB_1011eb80;
        puVar2 = (uint *)((ushort)param_1[4] + 0x2ff18000);
      }
      param_2 = *puVar2;
      puVar2 = puVar2 + 1;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = param_2;
    }
    param_2 = param_2 + (uint)(ushort)param_1[1] + (uint)uVar1;
    if (uVar4 <= param_2) {
      param_2 = param_2 - uVar4;
    }
    param_1[1] = (short)param_2;
  }
  return puVar2;
}

