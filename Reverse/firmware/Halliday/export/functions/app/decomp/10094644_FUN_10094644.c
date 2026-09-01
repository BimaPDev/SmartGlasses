/* FUN_10094644 @ 0x10094644 */

undefined4 FUN_10094644(int *param_1,uint param_2,undefined4 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  if (*(ushort *)(param_1 + 1) == 0xffff) {
    FUN_10094174(3,DAT_1009471c,0xe3,DAT_10094718,DAT_10094714);
  }
  else {
    uVar2 = (uint)*(byte *)((int)param_1 + 7);
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        if ((*(ushort *)(param_1 + 1) & 0x3fff) == param_2) {
          *(undefined2 *)(param_1 + 1) = 0;
          *(undefined1 *)((int)param_1 + 7) = 0;
          return 1;
        }
      }
      else {
        uVar5 = 0;
        piVar7 = (int *)*param_1;
        do {
          uVar3 = *(ushort *)((int)piVar7 + uVar5 * 2 + uVar2 * 4) & 0x3fff;
          if (uVar3 == param_2) {
            if (uVar2 == 2) {
              *(undefined1 *)((int)param_1 + 7) = 1;
              if (uVar5 == 0) {
                uVar1 = *(undefined2 *)((int)piVar7 + 10);
              }
              else {
                uVar1 = (undefined2)piVar7[2];
              }
              *(undefined2 *)(param_1 + 1) = uVar1;
              if (uVar5 == 0) {
                iVar6 = piVar7[1];
              }
              else {
                iVar6 = *piVar7;
              }
              *param_1 = iVar6;
            }
            else {
              iVar6 = FUN_10094254((uVar2 - 1) * 6,DAT_10094718,uVar3,6,param_1,param_2,param_3);
              if (iVar6 == 0) {
                return 0;
              }
              uVar5 = 0;
              iVar8 = 0;
              *param_1 = iVar6;
              bVar4 = *(char *)((int)param_1 + 7) - 1;
              *(byte *)((int)param_1 + 7) = bVar4;
              do {
                if (*(ushort *)((int)piVar7 + uVar5 * 2 + uVar2 * 4) != param_2) {
                  *(int *)(iVar6 + iVar8 * 4) = piVar7[uVar5];
                  *(undefined2 *)(iVar6 + iVar8 * 2 + (uint)bVar4 * 4) =
                       *(undefined2 *)((int)piVar7 + uVar5 * 2 + uVar2 * 4);
                  iVar8 = iVar8 + 1;
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 <= *(byte *)((int)param_1 + 7));
            }
            FUN_10094268(piVar7,DAT_10094718);
            return 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
    }
  }
  return 0;
}

