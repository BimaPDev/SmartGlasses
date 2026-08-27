/* FUN_2c4f2bfc @ 0x2c4f2bfc */

void FUN_2c4f2bfc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 uStack_71;
  undefined1 auStack_70 [40];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint local_1c;
  
  uVar2 = *(uint *)(param_2 + 0x30);
  uVar1 = uVar2 << 0xd;
  local_1c = *DAT_2c4f2cfc;
  if ((int)uVar1 < 0) {
    if (-1 < (int)(uVar2 << 0xb)) {
      *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
    }
    uVar2 = uVar2 & 0xfffbffff;
    *(uint *)(param_2 + 0x30) = uVar2;
  }
  if ((uVar2 & 0x20000) == 0) {
    lVar4 = (ulonglong)uVar1 << 0x20;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x34);
    if ((uVar2 & 0x100000) == 0) {
      FUN_2c674268(auStack_70,0,0x54);
      local_48 = *(undefined4 *)(param_2 + 0x28);
      local_44 = *(undefined4 *)(param_2 + 0x2c);
      local_40 = 1;
      local_30 = *param_1;
      iStack_2c = param_1[1];
      iStack_28 = param_1[2];
      iStack_24 = param_1[3];
      *param_1 = -1;
      local_3c = uVar1;
      while (*(uint *)(param_2 + 0x34) < *(uint *)(param_2 + 0x2c)) {
        while( true ) {
          lVar4 = FUN_2c4f30e8(param_1,auStack_70,&uStack_71,1);
          if (((int)lVar4 < 0) ||
             (lVar4 = FUN_2c4f2d00(param_1,param_2,&uStack_71,1), (int)lVar4 < 0))
          goto LAB_2c4f2cc0;
          if (*param_1 == -1) break;
          *param_1 = -1;
          local_30 = -1;
          if (*(uint *)(param_2 + 0x2c) <= *(uint *)(param_2 + 0x34)) goto LAB_2c4f2c92;
        }
      }
LAB_2c4f2c92:
      do {
        lVar4 = FUN_2c4f1200(param_1,param_2 + 0x40,param_1,1);
        if ((int)lVar4 == 0) {
          uVar2 = *(uint *)(param_2 + 0x30);
          uVar3 = *(uint *)(param_2 + 0x34);
          goto LAB_2c4f2cda;
        }
      } while (((int)lVar4 == -0x54) && (lVar4 = FUN_2c4f2ab8(param_1,param_2), (int)lVar4 == 0));
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x2c);
      if (*(uint *)(param_2 + 0x2c) < uVar1) {
        uVar3 = uVar1;
      }
LAB_2c4f2cda:
      lVar4 = (ulonglong)*(uint *)(param_2 + 0x38) << 0x20;
      *(uint *)(param_2 + 0x2c) = uVar3;
      *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x38);
      *(uint *)(param_2 + 0x30) = uVar2 & 0xfffdffff | 0x10000;
      *(uint *)(param_2 + 0x34) = uVar1;
    }
  }
LAB_2c4f2cc0:
  if ((*DAT_2c4f2cfc ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)lVar4,(int)((ulonglong)lVar4 >> 0x20),*DAT_2c4f2cfc ^ local_1c,0);
}

