/* FUN_1403a030 @ 0x1403a030 */

int FUN_1403a030(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  
  puVar2 = DAT_1403a138;
  if (param_2 == 0) {
    iVar9 = -100;
    uVar8 = 0;
  }
  else {
    uVar7 = 0;
    iVar9 = -100;
    uVar8 = 0;
    uVar6 = 0;
    puVar5 = param_1;
LAB_1403a066:
    do {
      if (puVar5[1] != 0) {
        if (uVar7 < 8) {
          iVar9 = FUN_14039f74(uVar7 & 0xff,*puVar5,puVar5[1],*(undefined1 *)(puVar5 + 2),
                               *(undefined1 *)((int)puVar5 + 9));
          if (iVar9 == 0) {
            if (param_3 != 0) {
              *puVar2 = 1 << (uVar7 & 0xff) | *puVar2;
            }
            uVar6 = uVar6 + 1;
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 3;
            if (uVar6 == param_2) break;
            goto LAB_1403a066;
          }
          uVar8 = uVar8 | 1 << (uVar6 & 0xff);
        }
        else {
          uVar8 = uVar8 | 1 << (uVar6 & 0xff);
        }
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar6 != param_2);
  }
  DataMemoryBarrier(0x1f);
  *(undefined4 *)(DAT_1403a128 + 0x94) = 5;
  uVar4 = DAT_1403a140;
  uVar3 = DAT_1403a13c;
  uVar1 = DAT_1403a12c;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  if (param_2 != 0) {
    uVar6 = 0;
    do {
      uVar10 = uVar4;
      if ((1 << (uVar6 & 0xff) & uVar8) == 0) {
        uVar10 = uVar1;
      }
      uVar6 = uVar6 + 1;
      FUN_1402a6e8(4,0x24e,DAT_1403a134,DAT_1403a130,uVar3,uVar10,*param_1,param_1[1],
                   *(undefined1 *)(param_1 + 2),*(undefined1 *)((int)param_1 + 9));
      param_1 = param_1 + 3;
    } while (param_2 != uVar6);
  }
  return iVar9;
}

