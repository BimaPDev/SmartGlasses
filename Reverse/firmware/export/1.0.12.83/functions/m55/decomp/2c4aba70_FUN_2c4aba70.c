/* FUN_2c4aba70 @ 0x2c4aba70 */

int FUN_2c4aba70(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 local_28;
  int local_24;
  
  local_24 = *DAT_2c4abd70;
  if (*param_1 == 1) {
    iVar5 = 0;
    goto LAB_2c4abb24;
  }
  (*(code *)param_1[0xd0])(param_1,(char)param_1[0x38],(short)param_1[0x39],(short)param_1[0x3b]);
  FUN_2c6444fc(2);
  iVar5 = FUN_2c4ab2e8(param_1);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x61d,DAT_2c4abd80,DAT_2c4abd7c,DAT_2c4abd78,(char)param_1[0x28],DAT_2c4abd74);
  }
  (*(code *)param_1[0xd0])(param_1,(char)param_1[0xa5],(short)param_1[0xa6],(short)param_1[0xa8]);
  FUN_2c6444fc(1);
  iVar5 = FUN_2c4ab450(param_1);
  if (iVar5 < 0) {
LAB_2c4abb62:
    FUN_2c4aaa58(param_1);
    local_28 = (uint)local_28._2_2_ << 0x10;
    FUN_2c4ab134(param_1,&local_28);
    FUN_2c4ab134(param_1,&local_28);
    (*(code *)param_1[0xd0])(param_1,(char)param_1[0xa5],(short)param_1[0xa6],(short)param_1[0xa7]);
    (*(code *)param_1[0xd0])(param_1,(char)param_1[0x38],(short)param_1[0x39],(short)param_1[0x3a]);
    *param_1 = 0;
  }
  else {
    if (*(char *)((int)param_1 + 0xad) == '\0') {
      FUN_2c4ab4ec(param_1);
      if (((code *)param_1[0xe1] != (code *)0x0) &&
         (iVar5 = (*(code *)param_1[0xe1])(param_1), iVar5 < 0)) goto LAB_2c4abb62;
      local_28 = 0;
      if ((code *)param_1[0xe0] != (code *)0x0) {
        (*(code *)param_1[0xe0])(param_1,&local_28);
        iVar5 = FUN_2c4aab6c(param_1,param_1[0x97],local_28,(char)param_1[0x98]);
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x5f9,DAT_2c4abfa0,DAT_2c4abfa8,DAT_2c4abfc8,(char)param_1[0x28],DAT_2c4abfc4);
        }
      }
      if (param_1[0xbc] == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x606,DAT_2c4abfa0,DAT_2c4abfa8,DAT_2c4abfb8,(char)param_1[0x28],DAT_2c4abfb4,0);
      }
      FUN_2c4ace48(param_1);
      if (*(char *)((int)param_1 + 0x9a) != '\x01') {
        if (*(char *)((int)param_1 + 0xad) == '\x01') goto LAB_2c4abada;
        iVar9 = param_1[0xae] - param_1[0x76];
        iVar5 = iVar9 * 2;
        if ((uint)param_1[0x30] < (uint)(iVar9 * 2)) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x18a,DAT_2c4abfa0,DAT_2c4abfa8,DAT_2c4abfe0,(char)param_1[0x28],DAT_2c4abfbc,
                iVar5,param_1[0x30]);
        }
        if (iVar9 * -0x80000000 < 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,400,DAT_2c4abfa0,DAT_2c4abfa8,DAT_2c4abfc0,(char)param_1[0x28],DAT_2c4abfbc,iVar5)
          ;
        }
        if (iVar5 == 0) {
          uVar6 = 0xffffffff;
        }
        else {
          pbVar11 = (byte *)(param_1[0x31] + -1);
          pbVar12 = pbVar11 + iVar5;
          uVar6 = 0xffffffff;
          do {
            pbVar11 = pbVar11 + 1;
            iVar5 = 8;
            bVar8 = 1;
            do {
              if ((int)uVar6 < 0) {
                uVar6 = DAT_2c4abd84 ^ uVar6 << 1;
              }
              else {
                uVar6 = uVar6 << 1;
              }
              if ((*pbVar11 & bVar8) != 0) {
                uVar6 = uVar6 ^ DAT_2c4abd84;
              }
              iVar5 = iVar5 + -1;
              bVar8 = bVar8 << 1;
            } while (iVar5 != 0);
          } while (pbVar12 != pbVar11);
        }
        uVar10 = 0x1f;
        uVar7 = 0;
        do {
          if ((uVar6 & 1) != 0) {
            uVar7 = uVar7 | 1 << (uVar10 & 0xff);
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0xffffffff);
        iVar5 = (*(code *)param_1[0xd1])(param_1,param_1[0xae] & 0xffff,~uVar7,(char)param_1[0xaf]);
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x19a,DAT_2c4abfa0,DAT_2c4abfa8,DAT_2c4abfcc,(char)param_1[0x28],DAT_2c4abfbc);
        }
        iVar5 = (*(code *)param_1[0xd0])
                          (param_1,(char)param_1[0xaa],(short)param_1[0xab],(short)param_1[0xac]);
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x1ab,DAT_2c4abfa0,DAT_2c4abfa8,DAT_2c4abfd8,(char)param_1[0x28],DAT_2c4abfd4);
        }
        FUN_2c4ab4ec(param_1,1);
        FUN_2c6444fc(5);
        uVar4 = DAT_2c4abd98;
        uVar3 = DAT_2c4abd94;
        uVar2 = DAT_2c4abd7c;
        local_28 = local_28 & 0xffff0000;
        iVar5 = (*(code *)param_1[0xcf])(param_1,(char)param_1[0x59],&local_28);
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x1c4,DAT_2c4abfa0,uVar2,DAT_2c4abfd0,(char)param_1[0x28],uVar3,param_1[0x59]);
        }
        if ((local_28 & 0xffff & ~param_1[0x5e]) != param_1[0x5d]) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x1c9,DAT_2c4abd80,uVar2,uVar4,(char)param_1[0x28],uVar3,local_28 & 0xffff);
        }
        iVar5 = (*(code *)param_1[0xd0])
                          (param_1,(char)param_1[0xaa],(short)param_1[0xab],(short)param_1[0xad]);
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x1b2,DAT_2c4abfa0,DAT_2c4abfa8,DAT_2c4abfdc,(char)param_1[0x28],DAT_2c4abfd4);
        }
        *(undefined1 *)((int)param_1 + 0x9a) = 1;
      }
      uVar2 = DAT_2c4abfe4;
      cVar1 = *(char *)((int)param_1 + 0xad);
      if (cVar1 != '\x01') {
        if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x5e7,DAT_2c4abfa0,DAT_2c4abfa8,DAT_2c4abfe8,(char)param_1[0x28],DAT_2c4abfe4,
                cVar1);
        }
        FUN_2c4ab4ec(param_1,0);
        FUN_2c4ab4ec(param_1,1);
        FUN_2c6444fc(1);
        local_28 = local_28 & 0xffff0000;
        (*(code *)param_1[0xcf])(param_1,(char)param_1[0x71],&local_28);
        if ((local_28 & 0xffff & ~param_1[0x72]) == 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x5e0,DAT_2c4abfa0,DAT_2c4abfa8,DAT_2c4abfa4,(char)param_1[0x28],uVar2,0xffffffff)
          ;
        }
      }
    }
LAB_2c4abada:
    if ((code *)param_1[0xd7] != (code *)0x0) {
      (*(code *)param_1[0xd7])(param_1,1);
    }
    FUN_2c4aa5dc(param_1,0);
    local_28 = local_28 & 0xffff0000;
    FUN_2c4ab134(param_1,&local_28);
    FUN_2c4ab134(param_1,&local_28);
    (*(code *)param_1[0xce])(param_1,(char)param_1[0x32],(short)param_1[0x35]);
    if ((code *)param_1[0xe3] != (code *)0x0) {
      (*(code *)param_1[0xe3])(param_1);
    }
    iVar5 = 0;
    *param_1 = 1;
  }
LAB_2c4abb24:
  if (*DAT_2c4abd70 == local_24) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

