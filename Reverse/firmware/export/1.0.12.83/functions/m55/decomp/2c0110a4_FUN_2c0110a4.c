/* FUN_2c0110a4 @ 0x2c0110a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0110a4(int param_1,int param_2,uint *param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int extraout_r1;
  undefined4 extraout_r2;
  int iVar6;
  undefined4 unaff_lr;
  undefined2 uStack_16;
  uint uStack_14;
  
  cVar1 = *param_4;
  uStack_14 = *param_3;
  if (cVar1 == '\x02') {
    if (*_DAT_2c01115c == '\x01') {
      uVar4 = 2;
      goto LAB_2c011120;
    }
    if (0xffff < (uint)(param_2 + param_1)) goto LAB_2c01111e;
    uVar5 = 0x10b;
    *_DAT_2c011154 = (short)(param_2 + param_1);
  }
  else {
    if (0xffff < (uint)(param_2 + param_1)) {
LAB_2c01111e:
      param_2 = param_2 + param_1;
      uVar4 = 1;
      goto LAB_2c011120;
    }
    *_DAT_2c011154 = (short)(param_2 + param_1);
    if ((cVar1 == '\0') || (cVar1 == '\x03')) {
      uVar5 = 0x6a;
    }
    else {
      uVar5 = 0x10b;
    }
  }
  FUN_2c008f74(uVar5);
  puVar3 = _DAT_2c011158;
  iVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar6 = getBasePriority();
  }
  uVar5 = extraout_r2;
  if (iVar6 != 0x40) {
    uVar5 = 0x2c0110de;
    *_DAT_2c011158 = 0x2c0110de;
    puVar3[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_2c008e4c(0xb,&uStack_16,uVar5,0x40);
  FUN_2c008f74(0xb,uStack_16);
  if (iVar6 == 0) {
    *_DAT_2c011158 = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar6);
  }
  uVar4 = 0;
  param_2 = extraout_r1;
LAB_2c011120:
  if ((*_DAT_2c011150 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8(uVar4,param_2,*_DAT_2c011150 ^ uStack_14,0);
}

