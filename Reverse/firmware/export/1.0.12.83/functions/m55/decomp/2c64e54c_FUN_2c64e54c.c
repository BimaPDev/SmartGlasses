/* FUN_2c64e54c @ 0x2c64e54c */

char * FUN_2c64e54c(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *pcVar11;
  
  pcVar11 = *(char **)(param_1 + 8);
  pcVar4 = *(char **)(param_1 + 0xc);
  pcVar7 = pcVar4;
  if ((pcVar11 != (char *)0x0) && (pcVar8 = pcVar4, pcVar7 = pcVar11, pcVar4 != (char *)0x0)) {
    do {
      pcVar3 = pcVar8;
      pcVar8 = *(char **)(pcVar3 + 8);
    } while (*(char **)(pcVar3 + 8) != (char *)0x0);
    pcVar7 = *(char **)(pcVar3 + 0xc);
    if (pcVar3 != param_1) {
      *(char **)(pcVar11 + 4) = pcVar3;
      *(char **)(pcVar3 + 8) = pcVar11;
      pcVar11 = pcVar3;
      if (pcVar4 != pcVar3) {
        pcVar11 = *(char **)(pcVar3 + 4);
        if (pcVar7 != (char *)0x0) {
          *(char **)(pcVar7 + 4) = pcVar11;
        }
        *(char **)(*(int *)(pcVar3 + 4) + 8) = pcVar7;
        *(char **)(pcVar3 + 0xc) = pcVar4;
        *(char **)(*(int *)(param_1 + 0xc) + 4) = pcVar3;
      }
      if (*(char **)(param_2 + 4) == param_1) {
        *(char **)(param_2 + 4) = pcVar3;
      }
      else {
        iVar6 = *(int *)(param_1 + 4);
        if (*(char **)(iVar6 + 8) == param_1) {
          *(char **)(iVar6 + 8) = pcVar3;
        }
        else {
          *(char **)(iVar6 + 0xc) = pcVar3;
        }
      }
      cVar1 = *param_1;
      *(undefined4 *)(pcVar3 + 4) = *(undefined4 *)(param_1 + 4);
      cVar2 = *pcVar3;
      *pcVar3 = cVar1;
      *param_1 = cVar2;
      goto LAB_2c64e59e;
    }
  }
  pcVar11 = *(char **)(param_1 + 4);
  if (pcVar7 != (char *)0x0) {
    *(char **)(pcVar7 + 4) = pcVar11;
  }
  if (*(char **)(param_2 + 4) == param_1) {
    *(char **)(param_2 + 4) = pcVar7;
  }
  else {
    iVar6 = *(int *)(param_1 + 4);
    if (*(char **)(iVar6 + 8) == param_1) {
      *(char **)(iVar6 + 8) = pcVar7;
    }
    else {
      *(char **)(iVar6 + 0xc) = pcVar7;
    }
  }
  if (*(char **)(param_2 + 8) == param_1) {
    pcVar4 = pcVar7;
    if (*(int *)(param_1 + 0xc) == 0) {
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 4);
    }
    else {
      do {
        pcVar8 = pcVar4;
        pcVar4 = *(char **)(pcVar8 + 8);
      } while (pcVar4 != (char *)0x0);
      *(char **)(param_2 + 8) = pcVar8;
    }
  }
  if (*(char **)(param_2 + 0xc) == param_1) {
    pcVar4 = pcVar7;
    if (*(int *)(param_1 + 8) == 0) {
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    }
    else {
      do {
        pcVar8 = pcVar4;
        pcVar4 = *(char **)(pcVar8 + 0xc);
      } while (pcVar4 != (char *)0x0);
      *(char **)(param_2 + 0xc) = pcVar8;
    }
  }
LAB_2c64e59e:
  if (*param_1 != '\0') {
    iVar5 = param_2 + 4;
    pcVar4 = param_1;
    iVar6 = param_2;
    while (pcVar8 = pcVar11, *(char **)(param_2 + 4) != pcVar7) {
      if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\x01')) goto LAB_2c64e5bc;
      pcVar3 = *(char **)(pcVar8 + 8);
      if (pcVar3 == pcVar7) {
        pcVar3 = *(char **)(pcVar8 + 0xc);
        if (*pcVar3 == '\0') {
          *pcVar3 = '\x01';
          *pcVar8 = '\0';
          FUN_2c64e3e6(pcVar8);
          pcVar3 = *(char **)(pcVar8 + 0xc);
          iVar6 = iVar5;
        }
        pcVar11 = *(char **)(pcVar3 + 8);
        pcVar9 = *(char **)(pcVar3 + 0xc);
        if (((pcVar11 != (char *)0x0) && (*pcVar11 != '\x01')) ||
           ((pcVar9 != (char *)0x0 && (*pcVar9 != '\x01')))) {
          if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\x01')) {
            *pcVar11 = '\x01';
            *pcVar3 = '\0';
            FUN_2c64e410();
            pcVar3 = *(char **)(pcVar8 + 0xc);
          }
          *pcVar3 = *pcVar8;
          puVar10 = *(undefined1 **)(pcVar3 + 0xc);
          *pcVar8 = '\x01';
          if (puVar10 != (undefined1 *)0x0) {
            *puVar10 = 1;
          }
          FUN_2c64e3e6(pcVar8,iVar5);
          break;
        }
      }
      else {
        if (*pcVar3 == '\0') {
          *pcVar3 = '\x01';
          *pcVar8 = '\0';
          FUN_2c64e410(pcVar8);
          pcVar3 = *(char **)(pcVar8 + 8);
          iVar6 = iVar5;
        }
        pcVar9 = *(char **)(pcVar3 + 8);
        pcVar11 = *(char **)(pcVar3 + 0xc);
        if (((pcVar11 != (char *)0x0) && (*pcVar11 != '\x01')) ||
           ((pcVar9 != (char *)0x0 && (*pcVar9 != '\x01')))) {
          if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\x01')) {
            *pcVar11 = '\x01';
            *pcVar3 = '\0';
            FUN_2c64e3e6();
            pcVar3 = *(char **)(pcVar8 + 8);
            iVar6 = iVar5;
          }
          *pcVar3 = *pcVar8;
          puVar10 = *(undefined1 **)(pcVar3 + 8);
          *pcVar8 = '\x01';
          if (puVar10 != (undefined1 *)0x0) {
            *puVar10 = 1;
          }
          FUN_2c64e410(pcVar8,iVar5,1,puVar10,pcVar4,iVar6,param_3);
          break;
        }
      }
      pcVar11 = *(char **)(pcVar8 + 4);
      *pcVar3 = '\0';
      pcVar7 = pcVar8;
    }
    if (pcVar7 != (char *)0x0) {
LAB_2c64e5bc:
      *pcVar7 = '\x01';
    }
  }
  return param_1;
}

