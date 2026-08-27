/* FUN_1407f60c @ 0x1407f60c */

void FUN_1407f60c(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 local_54;
  undefined1 auStack_50 [32];
  uint local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined1 local_1e;
  int local_14;
  
  local_14 = *DAT_1407f6d4;
  if (param_1 == 0) {
    uVar3 = *(uint *)(param_3 + 0xe8) & 1;
    if ((uVar3 == 0) || (-1 < *(int *)(param_3 + 0xe4) << 0x1e)) {
      if ((-1 < (int)(*(uint *)(param_3 + 0xe8) << 0x15)) || (-1 < *(int *)(param_3 + 0xe4) << 0x17)
         ) {
        if (*DAT_1407f6d4 == local_14) {
          local_14 = *DAT_1407f5bc;
          iVar2 = param_3;
          do {
            if (*(code **)(iVar2 + 0x38) != (code *)0x0) {
              (**(code **)(iVar2 + 0x38))(param_3,*(undefined1 *)(iVar2 + 0x33));
            }
            iVar2 = iVar2 + 0xc;
          } while (iVar2 != param_3 + 0x54);
          pcVar4 = (code *)*DAT_1407f5c0;
          *(undefined1 *)(param_3 + 0x26) = 0;
          *(undefined1 *)(param_3 + 0xec) = 6;
          (*pcVar4)(param_3,0x1e);
          if (*(char *)(param_3 + 0xf6) == '\0') {
            if (*(int *)(param_3 + 0xe4) << 0x1d < 0) {
              if (*(byte *)(param_3 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_1402a64c(0x43,DAT_1407f5e0,*(undefined1 *)(param_3 + 0xc),DAT_1407f5dc,
                             *(byte *)(param_3 + 0xec));
              }
              FUN_1407edac(param_3,DAT_1407f5c8,DAT_1407f5d8,10,0,0xff);
              bVar1 = *(byte *)(param_3 + 0xec);
            }
            else {
              bVar1 = *(byte *)(param_3 + 0xec);
            }
            if (bVar1 < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x43,DAT_1407f5e0,*(undefined1 *)(param_3 + 0xc),DAT_1407f5dc,bVar1);
            }
            FUN_1407edac(param_3,DAT_1407f5c8,DAT_1407f5c4,10,0,0xff);
            if (*(byte *)(param_3 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x43,DAT_1407f5e0,*(undefined1 *)(param_3 + 0xc),DAT_1407f5dc,
                           *(byte *)(param_3 + 0xec));
            }
            FUN_1407edac(param_3,DAT_1407f5c8,DAT_1407f5cc,0xc,0,0xff);
            if (*(byte *)(param_3 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x43,DAT_1407f5e0,*(undefined1 *)(param_3 + 0xc),DAT_1407f5dc,
                           *(byte *)(param_3 + 0xec));
            }
            FUN_1407edac(param_3,DAT_1407f5c8,DAT_1407f5d0,10,0,0xff);
            if (*(char *)(DAT_1407f5d4 + 6) != '\0') {
              local_54 = 0;
              FUN_140e5658(auStack_50,0,0x3c);
              FUN_140dc3ac(&local_54,DAT_1407f5f4,*DAT_1407f5ec,*DAT_1407f5e8,*DAT_1407f5f0,
                           *DAT_1407f5e4);
              iVar2 = FUN_140dd3a4(&local_54);
              if (iVar2 != 0) {
                if (*(byte *)(param_3 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_1402a64c(0x43,DAT_1407f5e0,*(undefined1 *)(param_3 + 0xc),DAT_1407f5dc,
                               *(byte *)(param_3 + 0xec));
                }
                FUN_1407edac(param_3,DAT_1407f5c8,&local_54,iVar2,0,0xff);
              }
            }
          }
          if (*DAT_1407f5bc == local_14) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_14039adc();
        }
        goto LAB_1407f6d0;
      }
      if ((uVar3 == 0) || (-1 < *(int *)(param_3 + 0xe4) << 0x1e)) {
        iVar2 = FUN_1407ef88(param_3);
        if (iVar2 == 0) goto LAB_1407f668;
        goto LAB_1407f66e;
      }
    }
    local_28 = *DAT_1407f6d8;
    uStack_24 = DAT_1407f6d8[1];
    uStack_20 = (undefined2)DAT_1407f6d8[2];
    local_1e = (undefined1)((uint)DAT_1407f6d8[2] >> 0x10);
    iVar2 = FUN_140dd3a4(&local_28);
    if (iVar2 != 0) {
      local_30 = (uint)*(byte *)(param_3 + 0xec);
      if (local_30 < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_1407f6e4,*(undefined1 *)(param_3 + 0xc),DAT_1407f6e0);
      }
      local_30 = 0;
      uStack_2c = 0xff;
      iVar2 = FUN_1407edac(param_3,DAT_1407f6dc,&local_28,iVar2);
      if (iVar2 != 0) goto LAB_1407f66e;
    }
LAB_1407f668:
    FUN_14083664(*(undefined4 *)(param_3 + 8));
  }
  else if (param_3 != 0) goto LAB_1407f668;
LAB_1407f66e:
  if (*DAT_1407f6d4 == local_14) {
    return;
  }
LAB_1407f6d0:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

