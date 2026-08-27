/* FUN_2c60138c @ 0x2c60138c */

void FUN_2c60138c(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  short sVar9;
  byte bVar10;
  byte bVar11;
  uint local_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 *puStack_84;
  uint local_80;
  uint *puStack_7c;
  uint local_78;
  undefined4 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_3f;
  byte local_3e;
  byte local_38;
  int local_34;
  
  local_34 = *DAT_2c6016d4;
  iVar6 = FUN_2c600c38(param_2,param_2,param_3,0);
  if (iVar6 == 0) {
    if (*DAT_2c6016d4 == local_34) {
      FUN_2c60125c(param_1,param_2);
      return;
    }
    goto LAB_2c601628;
  }
  bVar1 = FUN_2c6033b4(param_2,0,0x60);
  if (1 < bVar1) {
    uVar7 = FUN_2c600c2c(param_2);
    FUN_2c607338(param_2,&local_88);
    FUN_2c62a66c(&local_88,uVar7);
    if (iVar6 == 2) {
      local_78 = local_88;
      local_74 = puStack_84;
      FUN_2c6076c4(param_2,&local_78,0);
      iVar6 = FUN_2c62a6b4(&local_80,*(undefined4 *)(param_1 + 8),&local_78);
      if (iVar6 != 0) {
        local_70 = local_80;
        local_6c = puStack_7c;
        FUN_2c6076c4(param_2,&local_70,0,1);
        iVar6 = FUN_2c62a6b4(&local_70,&local_70,&local_88);
        if (iVar6 != 0) {
          local_90 = local_70;
          uStack_8c = local_6c;
          iVar6 = FUN_2c62a998(&local_90,param_2 + 0x14,0);
          if (iVar6 == 0) {
            bVar11 = 1;
          }
          else {
            local_70 = local_70 & 0xffffff00;
            local_6c = &local_90;
            FUN_2c602340(param_2,0x12,&local_70);
            bVar11 = (local_70 & 0xff) != 0;
          }
          goto LAB_2c60145a;
        }
      }
    }
    else if (iVar6 == 1) {
      iVar6 = FUN_2c62a6b4(&local_70,*(undefined4 *)(param_1 + 8),&local_88);
      if (iVar6 != 0) {
        local_90 = local_70;
        uStack_8c = local_6c;
        iVar6 = FUN_2c62a998(&local_90,param_2 + 0x14,0);
        if (iVar6 == 0) {
          bVar11 = 3;
        }
        else {
          local_70 = local_70 & 0xffffff00;
          local_6c = &local_90;
          FUN_2c602340(param_2,0x12,&local_70);
          bVar11 = (local_70 & 0xff) != 0 | 2;
        }
LAB_2c60145a:
        puVar8 = (undefined4 *)FUN_2c61320c(param_1,&local_90,bVar11);
        if (puVar8 != (undefined4 *)0x0) {
          sVar2 = FUN_2c6033b4(param_2,0,0x6e);
          sVar3 = FUN_2c6033b4(param_2,0,0x6f);
          FUN_2c614a0c(&local_70);
          local_3f = bVar1;
          sVar4 = FUN_2c6033b4(param_2,0,0x6d);
          if (sVar4 < 0xe11) {
            if (sVar4 < 0) {
              local_70 = CONCAT22(local_70._2_2_,sVar4 + 0xe10);
            }
            else {
              local_70 = CONCAT22(local_70._2_2_,sVar4);
            }
          }
          else {
            local_70 = CONCAT22(local_70._2_2_,sVar4 + -0xe10);
          }
          uVar5 = FUN_2c6033b4(param_2,0,0x6c);
          local_70 = CONCAT22(uVar5,(undefined2)local_70);
          bVar1 = FUN_2c6033b4(param_2,0,0x67);
          bVar10 = bVar11 & 2;
          local_3e = local_3e & 0xf0 | bVar1 & 0xf;
          local_38 = local_38 & 0xfe |
                     (byte)(((uint)*(byte *)(*(int *)*DAT_2c6016d8 + 0x10) << 0x1c) >> 0x1f);
          if (bVar10 == 0) {
            sVar4 = *(short *)((int)puVar8 + 10);
          }
          else {
            puVar8[2] = *puVar8;
            puVar8[3] = puVar8[1];
            sVar4 = *(short *)((int)puVar8 + 10);
            sVar9 = *(short *)((int)puVar8 + 0x12) + sVar4 + -1;
            if (*(short *)((int)puVar8 + 6) <= sVar9) {
              sVar9 = *(short *)((int)puVar8 + 6);
            }
            *(short *)((int)puVar8 + 0xe) = sVar9;
          }
          if (sVar4 <= uStack_8c._2_2_) {
            do {
              if (bVar10 != 0) {
                if (bVar11 == 2) {
                  sVar4 = *(short *)((int)puVar8 + 0xe);
                  uVar7 = 0;
                }
                else {
                  iVar6 = FUN_2c62a998(puVar8 + 2,param_2 + 0x14,0);
                  if (iVar6 != 0) {
                    local_78 = local_78 & 0xffffff00;
                    local_74 = puVar8 + 2;
                    FUN_2c602340(param_2,0x12,&local_78);
                    if ((local_78 & 0xff) == 0) {
                      sVar4 = *(short *)((int)puVar8 + 0xe);
                      uVar7 = 0;
                      goto LAB_2c601638;
                    }
                  }
                  uVar7 = 1;
                  sVar4 = *(short *)((int)puVar8 + 10) + *(short *)(puVar8 + 4) + -1;
                  *(short *)((int)puVar8 + 0xe) = sVar4;
                }
LAB_2c601638:
                if (*(short *)((int)puVar8 + 6) < sVar4) {
                  *(short *)((int)puVar8 + 0xe) = *(short *)((int)puVar8 + 6);
                }
                FUN_2c613270(param_1,puVar8,uVar7);
              }
              FUN_2c60125c(param_1,param_2);
              local_6c = (uint *)CONCAT22((*(short *)(param_2 + 0x16) + sVar3) -
                                          (*(short **)(param_1 + 4))[1],
                                          (*(short *)(param_2 + 0x14) + sVar2) -
                                          **(short **)(param_1 + 4));
              FUN_2c613278(param_1,puVar8,&local_70);
              if (bVar10 == 0) break;
              sVar4 = *(short *)((int)puVar8 + 0xe) + 1;
              *(short *)((int)puVar8 + 0xe) = *(short *)((int)puVar8 + 0x12) + -1 + sVar4;
              *(short *)((int)puVar8 + 10) = sVar4;
            } while (sVar4 <= uStack_8c._2_2_);
          }
          FUN_2c613280(param_1,puVar8);
        }
      }
    }
  }
  if (*DAT_2c6016d4 == local_34) {
    return;
  }
LAB_2c601628:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

