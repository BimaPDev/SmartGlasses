/* FUN_2c5fa21c @ 0x2c5fa21c */

void FUN_2c5fa21c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar3 = DAT_2c5fa2f8;
  uVar2 = DAT_2c5fa2f4;
  uVar1 = DAT_2c5fa2f0;
  local_24 = *DAT_2c5fa2e8;
  iVar6 = 0;
  for (; 0 < param_3; param_3 = param_3 - iVar4) {
    iVar4 = FUN_2c5fa034(param_2,param_3,&local_2c,iVar6);
    if (iVar4 == 1) {
      if (local_2c - 0x41U < 0x1a) {
        local_2c = local_2c + 0x20;
      }
      FUN_2c5f6b1c(param_1);
      iVar6 = 1;
    }
    else {
      iVar6 = iVar4;
      if (local_2c < 0x20000) {
        if (iVar4 < 0) {
          iVar6 = -iVar4;
          FUN_2c5f6b40(param_1,uVar1,3);
          iVar4 = iVar6;
        }
        else {
          local_28 = local_2c;
          puVar5 = (uint *)FUN_2c6684dc(&local_28,uVar3,0x5e0,4,uVar2);
          if (puVar5 == (uint *)0x0) {
            FUN_2c5f6b40(param_1,param_2,iVar4);
          }
          else {
            FUN_2c5f6b40(param_1,DAT_2c5fa2ec + ((*puVar5 & 0x1fffffff) >> 0x11) * 2,*puVar5 >> 0x1d
                        );
          }
        }
      }
      else {
        FUN_2c5f6b40(param_1,param_2,iVar4);
      }
    }
    param_2 = param_2 + iVar6;
  }
  if (*DAT_2c5fa2e8 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

