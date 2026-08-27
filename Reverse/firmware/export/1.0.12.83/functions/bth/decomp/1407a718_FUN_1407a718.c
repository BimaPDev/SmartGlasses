/* FUN_1407a718 @ 0x1407a718 */

void FUN_1407a718(byte *param_1,uint param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  do {
    if (param_1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1407a908,DAT_1407a900,param_2);
    }
    if ((param_1[2] != 0) && (**(byte **)(param_1 + 8) == param_2)) {
      if (param_2 != 0xff) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_1407a90c,DAT_1407a900,param_2,*param_1 >> 2);
      }
      cVar2 = *param_3;
      pcVar3 = *(char **)(*(byte **)(param_1 + 8) + 2);
      if (cVar2 == ':') {
        if (((((((param_3[1] == '\x05') && (param_3[2] == '\0')) && (param_3[3] == '\0')) &&
              ((param_3[4] == '5' && (param_3[5] == 'L')))) &&
             ((*pcVar3 == ':' && ((pcVar3[1] == '\x05' && (pcVar3[2] == '\0')))))) &&
            (pcVar3[3] == '\0')) && ((pcVar3[4] == '5' && (pcVar3[5] == 'L')))) {
          cVar2 = ':';
          cVar1 = '\x05';
          goto LAB_1407a7aa;
        }
        uVar4 = FUN_1407a6bc(param_3);
        param_2 = (uint)((ulonglong)uVar4 >> 0x20);
        if ((int)uVar4 != 0) {
          uVar4 = FUN_1407a6bc(pcVar3);
          param_2 = (uint)((ulonglong)uVar4 >> 0x20);
          if ((int)uVar4 != 0) goto LAB_1407a7e0;
        }
      }
      else {
        uVar4 = FUN_1407a6bc(param_3);
        param_2 = (uint)((ulonglong)uVar4 >> 0x20);
        if ((int)uVar4 != 0) {
          uVar4 = FUN_1407a6bc(pcVar3);
          param_2 = (uint)((ulonglong)uVar4 >> 0x20);
          if ((int)uVar4 != 0) {
LAB_1407a7e0:
            cVar2 = *pcVar3;
            cVar1 = pcVar3[1];
            goto LAB_1407a7aa;
          }
        }
        if (cVar2 == '-') {
          if (((((param_3[1] == '\x01') && (param_3[2] == '\0')) && (param_3[3] == '\0')) &&
              (((param_3[4] == -0x56 && (param_3[5] == '\0')) &&
               ((*pcVar3 == '-' && ((pcVar3[1] == '\x01' && (pcVar3[2] == '\0')))))))) &&
             ((pcVar3[3] == '\0' && (pcVar3[4] == -0x56)))) {
            cVar2 = '-';
            cVar1 = '\x01';
            if (pcVar3[5] == '\0') goto LAB_1407a7aa;
          }
        }
        else if (cVar2 == 'u') {
          if (((((param_3[1] == '\0') && (param_3[2] == '\0')) && (param_3[3] == '\0')) &&
              (((param_3[4] == '\x03' && (param_3[5] == '\x01')) &&
               (((*pcVar3 == 'u' && ((pcVar3[1] == '\0' && (pcVar3[2] == '\0')))) &&
                (pcVar3[3] == '\0')))))) && ((pcVar3[4] == '\x03' && (pcVar3[5] == '\x01')))) {
            cVar2 = 'u';
            cVar1 = '\0';
LAB_1407a7aa:
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x45,DAT_1407a904,DAT_1407a900,0xff,*param_1 >> 2,cVar2,cVar1);
          }
        }
        else if (((((cVar2 == -0x71) && (param_3[1] == '\x03')) && (param_3[2] == '\0')) &&
                 ((param_3[3] == '\0' && (param_3[4] == -0x56)))) &&
                (((param_3[5] == -0x71 && ((*pcVar3 == -0x71 && (pcVar3[1] == '\x03')))) &&
                 ((pcVar3[2] == '\0' && ((pcVar3[3] == '\0' && (pcVar3[4] == -0x56)))))))) {
          cVar2 = pcVar3[5];
          cVar1 = '\x03';
          if (cVar2 == -0x71) goto LAB_1407a7aa;
        }
      }
    }
    param_1 = *(byte **)(param_1 + 0x14);
  } while( true );
}

