/* FUN_2c4f190c @ 0x2c4f190c */

void FUN_2c4f190c(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar2 = param_1[0x1a];
  uVar6 = param_2[1];
  uVar1 = *(uint *)(iVar2 + 0x18);
  local_2c = *DAT_2c4f1b24;
  uVar1 = uVar1 * ((uVar6 + uVar1 + 7) / uVar1);
  local_3c = 0;
  if (uVar6 < uVar1) {
    uVar11 = 0;
    while( true ) {
      iVar7 = uVar6 + 4;
      if (uVar1 - iVar7 < 0x3ff) {
        uVar6 = iVar7 + (uVar1 - iVar7);
      }
      else {
        uVar6 = uVar6 + 0x402;
      }
      if ((uVar6 < uVar1) && (uVar1 - 8 <= uVar6)) {
        uVar6 = uVar1 - 8;
      }
      local_38 = 0xffffffff;
      if ((*param_2 < *(uint *)(iVar2 + 0x20)) && (uVar6 + 4 <= *(uint *)(iVar2 + 0x1c))) {
        lVar12 = FUN_2c4f0eb4(param_1,0,param_1,4,*param_2,uVar6,&local_38,4);
        if (((int)lVar12 != 0) && ((int)lVar12 != -0x54)) goto LAB_2c4f1a2a;
        uVar9 = ~(local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                 | local_38 >> 0x18);
        puVar3 = (undefined1 *)((0x500 - ((int)uVar9 >> 0x1f)) * 0x100000);
      }
      else {
        puVar3 = &DAT_50000000;
        uVar9 = 0;
      }
      local_38 = uVar6 - iVar7 | (uint)puVar3 | 0xffc00;
      uVar6 = param_2[2] ^ local_38;
      local_34 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 0x18;
      local_30 = FUN_2c4f4b08(param_2[3],&local_34,4);
      param_2[3] = local_30;
      lVar12 = FUN_2c4f1298(param_1,param_1 + 4,param_1,0,*param_2,param_2[1],&local_34,8);
      if ((int)lVar12 != 0) goto LAB_2c4f1a2a;
      if (uVar11 == 0) {
        local_3c = param_2[3];
        uVar11 = param_2[1] + 4;
      }
      uVar6 = (local_38 & 0x3ff) + 4 + param_2[1];
      param_2[1] = uVar6;
      param_2[2] = uVar9 & 0x80000000 ^ local_38;
      param_2[3] = 0xffffffff;
      if (uVar1 <= uVar6) break;
      iVar2 = param_1[0x1a];
    }
  }
  else {
    uVar11 = 0;
  }
  *param_1 = 0xffffffff;
  lVar12 = FUN_2c4f1200(param_1,param_1 + 4,param_1,0);
  if ((int)lVar12 == 0) {
    lVar12 = (**(code **)(param_1[0x1a] + 0x10))();
    uVar6 = (uint)((ulonglong)lVar12 >> 0x20);
    if ((int)lVar12 == 0) {
      uVar9 = param_2[4];
      uVar4 = uVar11;
      while (uVar9 < uVar1) {
        uVar10 = uVar4 + 4;
        if ((uVar10 <= uVar9) || ((local_3c != 0xffffffff && (uVar11 == uVar9)))) {
LAB_2c4f1ae0:
          lVar12 = CONCAT44(uVar6,0xffffffac);
          goto LAB_2c4f1a2a;
        }
        uVar8 = 0xffffffff;
        while( true ) {
          uVar6 = param_1[0x1a];
          if (*(uint *)(uVar6 + 0x20) <= *param_2) goto LAB_2c4f1ae0;
          uVar6 = *(uint *)(uVar6 + 0x1c);
          uVar5 = uVar9 + 1;
          if (uVar6 < uVar5) goto LAB_2c4f1ae0;
          lVar12 = FUN_2c4f0eb4(param_1,0,param_1,uVar10 - uVar9,*param_2,uVar9,&local_38,1);
          if ((int)lVar12 != 0) goto LAB_2c4f1a2a;
          uVar13 = FUN_2c4f4b08(uVar8,&local_38,1);
          uVar6 = (uint)((ulonglong)uVar13 >> 0x20);
          uVar8 = (uint)uVar13;
          if (uVar10 <= uVar5) break;
          uVar9 = uVar5;
          if ((uVar5 == uVar11) && (uVar8 != local_3c)) goto LAB_2c4f1ae0;
        }
        if (uVar8 != 0) goto LAB_2c4f1ae0;
        uVar6 = uVar1 - uVar4;
        if (uVar6 < 0x3ff) {
          uVar4 = uVar4 + uVar6;
        }
        else {
          uVar4 = uVar4 + 0x3fe;
        }
        if (uVar1 <= uVar4) break;
        uVar9 = uVar1 - 8;
        if (uVar4 <= uVar1 - 8) {
          uVar9 = uVar4;
        }
        uVar4 = uVar9 + 4;
      }
      lVar12 = (ulonglong)uVar6 << 0x20;
    }
  }
LAB_2c4f1a2a:
  if ((*DAT_2c4f1b24 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail((int)lVar12,(int)((ulonglong)lVar12 >> 0x20),*DAT_2c4f1b24 ^ local_2c,0);
  }
  return;
}

