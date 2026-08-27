/* FUN_140668a4 @ 0x140668a4 */

bool FUN_140668a4(undefined4 param_1,int param_2,ushort *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  iVar2 = DAT_14066908;
  uVar4 = (uint)*param_3;
  if (uVar4 == 0) {
    uVar4 = 1;
    *param_3 = 1;
    iVar6 = *(int *)(iVar2 + 0x84);
    if (iVar6 != 0) {
      piVar7 = (int *)(iVar2 + 0x84);
      do {
        if ((int)(uVar4 + param_2) < (int)(uint)*(ushort *)(iVar6 + 4)) {
          return false;
        }
        uVar5 = (uint)*(byte *)(iVar6 + 7) + (uint)*(ushort *)(iVar6 + 4);
        uVar4 = uVar5 & 0xffff;
        *param_3 = (ushort)uVar5;
        piVar7 = (int *)*piVar7;
        iVar6 = *piVar7;
      } while (iVar6 != 0);
    }
  }
  else {
    piVar3 = (int *)*(int *)(DAT_14066908 + 0x84);
    piVar7 = (int *)(DAT_14066908 + 0x84);
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      if (uVar4 < (uint)*(ushort *)(piVar1 + 1) + (uint)*(byte *)((int)piVar1 + 7)) {
        return (int)(uint)*(ushort *)(*piVar7 + 4) <= (int)(uVar4 + param_2);
      }
      piVar7 = piVar1;
      piVar3 = (int *)*piVar1;
    }
  }
  return false;
}

