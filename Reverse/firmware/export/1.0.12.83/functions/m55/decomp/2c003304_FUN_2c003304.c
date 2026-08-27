/* FUN_2c003304 @ 0x2c003304 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c003304(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_lr;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = *_LAB_2c0034d8;
  uVar6 = param_2;
  uVar4 = param_3;
  uVar7 = param_4;
  uVar8 = param_5;
  FUN_2c003818(4,0x1d2,_LAB_2c0034dc,_LAB_2c0034e4,_LAB_2c0034e0,param_1,param_2,param_3,param_4,
               param_5);
  local_28 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  iVar3 = FUN_2c003618(param_1,param_5,&local_38,0x14);
  if (iVar3 == 0) {
    uVar6 = local_34;
    FUN_2c003818(4,0x1db,_LAB_2c0034dc,_LAB_2c0034e4,_LAB_2c0034e8,local_38,local_30,local_34,
                 local_2c,local_28);
    puVar2 = _LAB_2c0034ec;
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = getBasePriority();
    }
    uVar4 = extraout_r2;
    if (iVar5 != 0x40) {
      uVar4 = 0x2c003396;
      *_LAB_2c0034ec = 0x2c003396;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    uVar7 = local_30;
    uVar8 = local_2c;
    uVar9 = local_28;
    local_30 = param_2;
    local_2c = param_3;
    local_28 = param_4;
    iVar3 = FUN_2c0035a8(param_1,extraout_r1,uVar4,0x40);
    if (iVar3 == 0) {
      FUN_2c003658();
      iVar3 = FUN_2c0037e8(param_1,param_5,0x1000);
      if (iVar3 == 0) {
        iVar3 = FUN_2c003888(param_1,param_5,&local_38,0x14);
        if (iVar3 == 0) {
          FUN_2c003568();
          iVar3 = FUN_2c0038a8(param_1);
          if (iVar3 == 0) {
            if (iVar5 == 0) {
              *_LAB_2c0034ec = 0xffffffff;
            }
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              setBasePriority(iVar5);
            }
            local_28 = 0;
            local_38 = 0;
            local_34 = 0;
            local_30 = 0;
            local_2c = 0;
            iVar3 = FUN_2c003618(param_1,param_5,&local_38,0x14);
            if (iVar3 == 0) {
              FUN_2c003818(4,0x200,_LAB_2c0034dc,_LAB_2c0034e4,_LAB_2c0034f0,local_38,local_30,
                           local_34,local_2c,local_28);
            }
            else {
              FUN_2c003818(4,0x1fd,_LAB_2c0034dc,_LAB_2c0034e4,_LAB_2c0034f8,iVar3);
            }
          }
          else {
            FUN_2c003818(4,0x1f5,_LAB_2c0034dc,_LAB_2c0034e4,_LAB_2c003504,iVar3);
          }
        }
        else {
          FUN_2c003818(4,0x1ef,_LAB_2c0034dc,_LAB_2c0034e4,_LAB_2c0034fc,iVar3);
        }
      }
      else {
        FUN_2c003818(4,0x1ea,_LAB_2c0034dc,_LAB_2c0034e4,_LAB_2c003500,iVar3,uVar7,uVar6,uVar8,uVar9
                    );
      }
    }
    else {
      FUN_2c003818(4,0x1e4,_LAB_2c0034dc,_LAB_2c0034e4,_LAB_2c0034f4,iVar3,uVar7,uVar6,uVar8,uVar9);
    }
  }
  else {
    FUN_2c003818(4,0x1d8,_LAB_2c0034dc,_LAB_2c0034e4,_LAB_2c0034f8,iVar3,uVar6,uVar4,uVar7,uVar8);
  }
  if (*_LAB_2c0034d8 == local_24) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c003558();
}

