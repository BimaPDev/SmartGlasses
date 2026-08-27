/* FUN_2c603cfc @ 0x2c603cfc */

void FUN_2c603cfc(int param_1,int param_2,undefined2 param_3,undefined2 param_4,ushort *param_5)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  byte local_26;
  int local_24;
  
  local_24 = *DAT_2c603e6c;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 4;
  *(undefined2 *)(param_1 + 0x20) = param_3;
  iVar4 = FUN_2c6033b4(param_1,param_2,param_5[4]);
  *(undefined2 *)(param_1 + 0x20) = param_4;
  iVar5 = FUN_2c6033b4(param_1,param_2,param_5[4]);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xfb;
  if ((iVar5 != iVar4) || (iVar4 != iVar5)) {
    *(undefined2 *)(param_1 + 0x20) = param_3;
    iVar4 = FUN_2c6033b4(param_1,param_2,param_5[4]);
    *(undefined2 *)(param_1 + 0x20) = param_4;
    puVar6 = (undefined4 *)FUN_2c60322c(param_1,param_2);
    lv_obj_set_local_style_prop(*puVar6,param_5[4],iVar4);
    if (param_5[4] == 0xb) {
      if (iVar4 == 0x7fff) {
        iVar4 = FUN_2c6073ec(param_1);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        iVar8 = FUN_2c6073f8(param_1);
        if (iVar8 < 0) {
          iVar8 = iVar8 + 1;
        }
        if ((iVar4 << 0xf) >> 0x10 < (iVar8 << 0xf) >> 0x10) {
          iVar4 = (int)(short)((short)((uint)(iVar4 << 0xf) >> 0x10) + 1);
          if (iVar5 == 0x7fff) {
            iVar5 = iVar4;
          }
        }
        else {
          iVar4 = (int)(short)((short)((uint)(iVar8 << 0xf) >> 0x10) + 1);
          if (iVar5 == 0x7fff) {
            iVar5 = iVar4;
          }
        }
      }
      else if (iVar5 == 0x7fff) {
        iVar5 = FUN_2c6073ec(param_1);
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        iVar8 = FUN_2c6073f8(param_1);
        if (iVar8 < 0) {
          iVar8 = iVar8 + 1;
        }
        if ((iVar5 << 0xf) >> 0x10 < (iVar8 << 0xf) >> 0x10) {
          sVar2 = (short)((uint)(iVar5 << 0xf) >> 0x10);
        }
        else {
          sVar2 = (short)((uint)(iVar8 << 0xf) >> 0x10);
        }
        iVar5 = (int)(short)(sVar2 + 1);
      }
    }
    piVar7 = (int *)FUN_2c62c938(DAT_2c603e70);
    if (piVar7 != (int *)0x0) {
      *piVar7 = param_1;
      uVar3 = DAT_2c603e74;
      piVar7[3] = iVar4;
      piVar7[4] = iVar5;
      uVar1 = param_5[4];
      piVar7[2] = param_2;
      *(ushort *)(piVar7 + 1) = uVar1;
      FUN_2c62e7b4(&local_68);
      local_26 = local_26 & 0xfe;
      local_38 = -(uint)param_5[1];
      local_50 = *(undefined4 *)(param_5 + 8);
      local_3c = (uint)*param_5;
      local_64 = uVar3;
      local_60 = DAT_2c603e78;
      local_40 = 0xff;
      local_48 = 0;
      uStack_44 = 0;
      local_4c = *(undefined4 *)(param_5 + 6);
      local_5c = DAT_2c603e7c;
      local_68 = piVar7;
      FUN_2c62e8ec(&local_68);
    }
  }
  if (*DAT_2c603e6c == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

