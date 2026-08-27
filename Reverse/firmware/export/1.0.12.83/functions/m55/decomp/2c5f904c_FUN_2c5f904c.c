/* FUN_2c5f904c @ 0x2c5f904c */

void FUN_2c5f904c(undefined4 param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_1010 [4];
  int local_100c;
  undefined1 auStack_1008 [8];
  int local_1000;
  int local_ffc;
  undefined4 local_ff8;
  int local_ff4;
  int local_ff0;
  undefined4 local_fec;
  undefined4 local_fe8;
  int local_fe4;
  undefined4 local_fe0;
  undefined4 uStack_fdc;
  undefined4 local_fd8;
  undefined4 uStack_fd4;
  undefined4 local_fd0;
  undefined1 auStack_fcc [4004];
  undefined2 local_28;
  uint local_24;
  
  local_24 = *DAT_2c5f92b4;
  local_ff4 = *param_2;
  local_ff0 = param_2[1];
  local_fe8 = 0xffffffff;
  local_fe4 = 0;
  local_fec = 0;
  local_fd0 = 0;
  local_fe0 = 0;
  uStack_fdc = 0;
  local_fd8 = 0;
  uStack_fd4 = 0;
  local_ff8 = param_1;
  FUN_2c674268(auStack_fcc,0,0xfa4);
  local_28 = 0x100;
  uVar4 = FUN_2c5f7848(&local_ff8,auStack_1010);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  if ((((int)uVar4 != 0) && (local_100c != 0)) && (local_fe4 < local_ff0)) {
    if (*(char *)(local_ff4 + local_fe4) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5f92c4,0xe7,DAT_2c5f92c8,DAT_2c5f92bc,DAT_2c5f92c0);
    }
    if (*(char *)(local_ff4 + local_fe4) == ':') {
      local_fe4 = local_fe4 + 1;
      FUN_2c5f76c4(&local_ff8);
      uVar4 = FUN_2c5f717c(&local_ff4,local_fe4,auStack_1008);
      iVar2 = (int)((ulonglong)uVar4 >> 0x20);
      if (-1 < (int)uVar4) {
        iVar3 = local_fe4 + (int)uVar4;
        local_fe4 = iVar3;
        FUN_2c5f76c4(&local_ff8);
        if ((iVar3 == local_fe4) ||
           (local_ffc = FUN_2c5f187c(DAT_2c5f92cc,&local_ff4), local_ffc == 0)) {
          local_ffc = 0;
          local_1000 = DAT_2c5f92b8;
          local_fe4 = iVar3;
        }
        else {
          local_1000 = local_ff4 + local_fe4;
          local_fe4 = local_fe4 + local_ffc;
        }
        for (; local_fe4 < local_ff0; local_fe4 = local_fe4 + 1) {
          if (*(char *)(local_ff4 + local_fe4) == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,DAT_2c5f92c4,0xe7,DAT_2c5f92c8,DAT_2c5f92bc,DAT_2c5f92c0);
          }
          if ((*(char *)(local_ff4 + local_fe4) != ' ') &&
             (*(char *)(local_ff4 + local_fe4) != '\t')) {
            if (*(char *)(local_ff4 + local_fe4) == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_2c62c82c(3,DAT_2c5f9378,0xe7,DAT_2c5f9380,DAT_2c5f937c,DAT_2c5f9374);
            }
            if (*(char *)(local_ff4 + local_fe4) == '\r') {
              local_fe4 = local_fe4 + 1;
              if (local_ff0 <= local_fe4) break;
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (*(char *)(local_ff4 + local_fe4) == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_2c62c82c(3,DAT_2c5f9378,0xe7,DAT_2c5f9380,DAT_2c5f937c,DAT_2c5f9374);
            }
            if (*(char *)(local_ff4 + local_fe4) == '\n') {
              local_fe4 = local_fe4 + 1;
            }
            else {
              if (local_ff0 <= local_fe4) {
                bVar1 = true;
              }
              if (!bVar1) {
                iVar2 = local_ff0;
                if (local_ffc != 0) goto LAB_2c5f922a;
                goto LAB_2c5f90a2;
              }
            }
            break;
          }
        }
LAB_2c5f911e:
        FUN_2c5fbaa4(param_3,auStack_1010,auStack_1008,&local_1000);
        iVar3 = local_fe4;
        iVar2 = extraout_r1;
        goto LAB_2c5f90a4;
      }
    }
  }
LAB_2c5f90a2:
  iVar3 = 0;
LAB_2c5f90a4:
  if ((*DAT_2c5f92b4 ^ local_24) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(iVar3,iVar2,*DAT_2c5f92b4 ^ local_24,0);
  }
  return;
LAB_2c5f922a:
  local_fe4 = iVar3;
  if (local_ff0 <= iVar3) goto LAB_2c5f911e;
  if (*(char *)(local_ff4 + iVar3) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5f92c4,0xe7,DAT_2c5f92c8,DAT_2c5f92bc,DAT_2c5f92c0);
  }
  if ((*(char *)(local_ff4 + iVar3) != ' ') && (*(char *)(local_ff4 + iVar3) != '\t')) {
    if (*(char *)(local_ff4 + iVar3) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5f9378,0xe7,DAT_2c5f9380,DAT_2c5f937c,DAT_2c5f9374);
    }
    if (*(char *)(local_ff4 + iVar3) == '\r') {
      local_fe4 = iVar3 + 1;
      if (local_ff0 <= local_fe4) goto LAB_2c5f911e;
      bVar1 = true;
    }
    if (*(char *)(local_ff4 + local_fe4) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5f9378,0xe7,DAT_2c5f9380,DAT_2c5f937c,DAT_2c5f9374);
    }
    if (*(char *)(local_ff4 + local_fe4) == '\n') {
      local_fe4 = local_fe4 + 1;
    }
    else if ((local_fe4 < local_ff0) && (!bVar1)) goto LAB_2c5f90a2;
    goto LAB_2c5f911e;
  }
  iVar3 = iVar3 + 1;
  goto LAB_2c5f922a;
}

