/* FUN_1407166c @ 0x1407166c */

void FUN_1407166c(uint param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = DAT_140716f8;
  iVar7 = *(int *)(DAT_140716f8 + (param_1 + 6) * 4);
  uVar3 = (uint)*(byte *)(iVar7 + 0x3c);
  if (uVar3 != 0) {
    uVar5 = 0;
    uVar8 = 0;
    do {
      if (param_1 < 2) {
        iVar4 = *(int *)(iVar2 + (param_1 + 6) * 4);
        if ((iVar4 != 0) && (uVar8 < *(byte *)(iVar4 + 0x3c))) {
          piVar6 = *(int **)(iVar4 + (uVar8 + 0x10) * 4);
          if (piVar6 != (int *)0x0) {
            iVar4 = *piVar6;
            uVar1 = *(ushort *)((int)piVar6 + 0x12);
            FUN_14070608(param_1,uVar8,0);
            FUN_14074168(piVar6);
            *(undefined4 *)(iVar7 + (uVar8 + 0x10) * 4) = 0;
            if (((uVar1 & 0x80) == 0) && (iVar4 != 0)) {
              (**(code **)(iVar4 + 0x18))(param_1,uVar1 & 0x80,uVar8,0x46);
            }
            uVar3 = (uint)*(byte *)(iVar7 + 0x3c);
          }
        }
      }
      uVar5 = uVar5 + 1;
      uVar8 = uVar5 & 0xff;
    } while (uVar8 < uVar3);
  }
  *(undefined1 *)(iVar7 + 0x3b) = 0;
  return;
}

