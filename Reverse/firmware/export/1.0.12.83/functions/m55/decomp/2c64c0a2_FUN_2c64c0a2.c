/* FUN_2c64c0a2 @ 0x2c64c0a2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64c0a2(uint param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uStack_48;
  undefined1 uStack_30;
  undefined3 uStack_2f;
  int iStack_2c;
  
  uVar8 = param_2 * 2;
  iStack_2c = *_LAB_2c64c1a4;
  _uStack_30 = CONCAT31((int3)((uint)*param_4 >> 8),(char)param_1);
  FUN_2c673bc8(&uStack_30,1,param_3,0);
  FUN_2c4c0248(param_1,1,0);
  uVar4 = _LAB_2c64c1b8;
  uVar3 = _LAB_2c64c1b4;
  uVar2 = _LAB_2c64c1b0;
  uVar6 = param_1 >> 3;
  if (uVar8 != 0) {
    uVar9 = 1;
    bVar1 = true;
    do {
      uVar10 = uVar9;
      if (bVar1) {
        FUN_2c4c0158(param_1);
        cVar5 = FUN_2c4c02f4(param_1);
        uVar7 = uVar3;
        if (cVar5 != '\x01') break;
      }
      else {
        FUN_2c4c01d0();
        cVar5 = FUN_2c4c02f4(param_1);
        uVar7 = uVar2;
        if (cVar5 != '\0') break;
      }
      bVar1 = (bool)(bVar1 ^ 1);
      FUN_2c648600(uVar4,uVar9,(param_1 & 7) + uVar6 * 10,uVar7);
      FUN_2c6444fc(1000);
      bVar11 = uVar9 != uVar8;
      uVar9 = uVar9 + 1;
      uVar10 = uVar8 + 1;
    } while (bVar11);
    if (uVar10 < uVar8) {
      FUN_2c648600(_LAB_2c64c1a8,(param_1 & 7) + uVar6 * 10);
      goto LAB_2c64c16c;
    }
  }
  uStack_48 = param_1 & 7;
  FUN_2c648600(_LAB_2c64c1ac,uStack_48 + uVar6 * 10);
LAB_2c64c16c:
  if (*_LAB_2c64c1a4 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

