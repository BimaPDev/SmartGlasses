/* FUN_2c4f53e0 @ 0x2c4f53e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4f53e0(ushort *param_1,int param_2,int *param_3,char *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lr;
  ushort uStack_16;
  int iStack_14;
  
  puVar2 = _LAB_2c4f54c8;
  iStack_14 = *param_3;
  if (*param_4 != '\0') {
    uVar4 = (uint)*param_1;
    if (*param_1 >> 8 == 1) {
      if (0xb < (uint)(_LAB_2c4f54d8 - (int)_LAB_2c4f54d4)) {
        uVar7 = 0;
        puVar5 = _LAB_2c4f54d4;
        do {
          if (*puVar5 == uVar4) {
            if (*(code **)(puVar5 + 4) == (code *)0x0) {
              FUN_2c6741e8(0x1291,_LAB_2c4f54e4,_LAB_2c4f54e0);
            }
            else {
              (**(code **)(puVar5 + 4))(param_1 + 2,param_2 - 4U & 0xffff);
            }
            goto LAB_2c4f5440;
          }
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + 6;
        } while (uVar7 < (uint)((ulonglong)_LAB_2c4f54dc *
                                (ulonglong)(uint)(_LAB_2c4f54d8 - (int)_LAB_2c4f54d4) >> 0x23));
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4f54ec,_LAB_2c4f54e8);
    }
    iVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar6 = getBasePriority();
    }
    if (iVar6 != 0x40) {
      uVar4 = 0x2c4f5408;
      *_LAB_2c4f54c8 = 0x2c4f5408;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    if (param_2 != 0) {
      uStack_16 = (ushort)param_2;
      iVar3 = FUN_2c673ef8(_LAB_2c4f54cc,param_2,uVar4,0x40);
      if ((int)(uStack_16 + 1) < iVar3) {
        FUN_2c674238(_LAB_2c4f54cc,&uStack_16);
        FUN_2c674238(_LAB_2c4f54cc,param_1,param_2);
      }
    }
    if (iVar6 == 0) {
      *_LAB_2c4f54c8 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar6);
    }
    FUN_2c644100(*_LAB_2c4f54d0,1);
  }
LAB_2c4f5440:
  if (*_LAB_2c4f54c4 == iStack_14) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

