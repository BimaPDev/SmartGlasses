/* FUN_1407c988 @ 0x1407c988 */

int * FUN_1407c988(int param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  int local_44;
  int *local_3c;
  
  if (param_4 == 3) {
    local_44 = 4;
  }
  else {
    if (param_4 != 5) {
      return (int *)0x0;
    }
    local_44 = 3;
  }
  piVar2 = (int *)FUN_140759b8(0x24);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  FUN_140e5658(piVar2,0,0x24);
  if (param_3 <= local_44) {
    return piVar2;
  }
  uVar6 = (uint)(byte)param_2[1];
  cVar1 = *param_2;
  if ((int)(uVar6 + 2) <= param_3) {
    uVar7 = 0;
    uVar8 = 0;
    cVar9 = '\t';
    local_3c = (int *)0x0;
    do {
      if (cVar1 == '\x01') {
        if ((uVar7 & 1) != 0) goto LAB_1407c9fa;
        piVar3 = (int *)FUN_140759b8(uVar6 + 7);
        uVar7 = uVar7 | 1;
        if (piVar3 == (int *)0x0) goto LAB_1407cb3e;
        *piVar3 = (int)piVar3 + 5;
        FUN_140e5278((int)piVar3 + 5,param_2,uVar6 + 2);
        *(undefined1 *)(piVar3 + 1) = 0;
        *piVar2 = (int)piVar3;
        if (uVar6 == 0) {
          uVar5 = 2;
          uVar6 = 2;
        }
        else {
          *(undefined1 *)(piVar3 + 1) = 0x23;
          uVar5 = 2;
          uVar6 = uVar5;
        }
      }
      else if (cVar1 == '\a') {
        if ((uVar6 < 3) || ((uVar7 & 0x40) != 0)) goto LAB_1407c9fa;
        piVar3 = (int *)FUN_140759b8(uVar6 + 7);
        uVar7 = uVar7 | 0x40;
        if (piVar3 == (int *)0x0) goto LAB_1407cb3e;
        *piVar3 = (int)piVar3 + 5;
        FUN_140e5278((int)piVar3 + 5,param_2);
        *(undefined1 *)(piVar3 + 1) = 0;
        piVar2[1] = (int)piVar3;
        if ((*(char *)(param_1 + 3) != *(char *)(*piVar3 + 3)) || (0x40 < uVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x43,DAT_1407cd98,*(char *)(param_1 + 3),*(char *)(*piVar3 + 3),uVar6);
        }
        uVar5 = uVar6 + 2 & 0xff;
        uVar6 = uVar6 + 2;
      }
      else if (cVar1 == '\x04') {
        if ((uVar7 & 8) != 0) goto LAB_1407c9fa;
        piVar3 = (int *)FUN_140759b8(uVar6 + 7);
        uVar7 = uVar7 | 8;
        if (piVar3 == (int *)0x0) goto LAB_1407cb3e;
        uVar5 = uVar6 + 2;
        *piVar3 = (int)piVar3 + 5;
        FUN_140e5278((int)piVar3 + 5,param_2,uVar5);
        *(undefined1 *)(piVar3 + 1) = 0;
        piVar2[2] = (int)piVar3;
        uVar6 = uVar6 + 2;
      }
      else if (cVar1 == '\b') {
        if ((int)(uVar7 << 0x18) < 0) goto LAB_1407c9fa;
        piVar3 = (int *)FUN_140759b8(uVar6 + 7);
        uVar7 = uVar7 | 0x80;
        if (piVar3 == (int *)0x0) goto LAB_1407cb3e;
        uVar5 = uVar6 + 2;
        *piVar3 = (int)piVar3 + 5;
        FUN_140e5278((int)piVar3 + 5,param_2,uVar5);
        *(undefined1 *)(piVar3 + 1) = 0;
        uVar6 = uVar6 + 2;
        piVar2[3] = (int)piVar3;
      }
      else if (cVar1 == '\x02') {
        if ((uVar7 & 2) != 0) goto LAB_1407c9fa;
        piVar3 = (int *)FUN_140759b8(uVar6 + 7);
        uVar7 = uVar7 | 2;
        if (piVar3 == (int *)0x0) goto LAB_1407cb3e;
        *piVar3 = (int)piVar3 + 5;
        FUN_140e5278((int)piVar3 + 5,param_2,uVar6 + 2);
        if (uVar6 == 0) {
          uVar4 = 0x29;
        }
        else {
          uVar4 = 0x18;
        }
        *(undefined1 *)(piVar3 + 1) = uVar4;
        piVar2[4] = (int)piVar3;
        uVar5 = 2;
        uVar6 = 2;
      }
      else if (cVar1 == '\x05') {
        if ((uVar7 & 0x10) != 0) goto LAB_1407c9fa;
        piVar3 = (int *)FUN_140759b8(uVar6 + 7);
        uVar7 = uVar7 | 0x10;
        if (piVar3 == (int *)0x0) goto LAB_1407cb3e;
        *piVar3 = (int)piVar3 + 5;
        FUN_140e5278((int)piVar3 + 5,param_2,uVar6 + 2);
        if (uVar6 == 1) {
          uVar4 = 0x29;
        }
        else {
          uVar4 = 0x18;
        }
        *(undefined1 *)(piVar3 + 1) = uVar4;
        piVar2[6] = (int)piVar3;
        uVar6 = 3;
        uVar5 = 3;
      }
      else if (cVar1 == '\x06') {
        if ((uVar7 & 0x20) == 0) {
          piVar3 = (int *)FUN_140759b8(uVar6 + 7);
          uVar7 = uVar7 | 0x20;
          if (piVar3 == (int *)0x0) goto LAB_1407cb3e;
          uVar5 = uVar6 + 2;
          *piVar3 = (int)piVar3 + 5;
          FUN_140e5278((int)piVar3 + 5,param_2,uVar5);
          *(undefined1 *)(piVar3 + 1) = 0x29;
          uVar6 = uVar6 + 2;
          piVar2[5] = (int)piVar3;
        }
        else {
LAB_1407c9fa:
          if (local_3c == (int *)0x0) {
            local_3c = (int *)FUN_140759b8(uVar6 + 7);
            if (local_3c == (int *)0x0) {
LAB_1407cb3e:
              if (*piVar2 != 0) {
                FUN_14075b28();
              }
              if (piVar2[1] != 0) {
                FUN_14075b28();
              }
              if (piVar2[3] != 0) {
                FUN_14075b28();
              }
              if (piVar2[2] != 0) {
                FUN_14075b28();
              }
              if (piVar2[5] != 0) {
                FUN_14075b28();
              }
              if (piVar2[6] != 0) {
                FUN_14075b28();
              }
              if (piVar2[7] != 0) {
                FUN_14075b28();
              }
              if (piVar2[4] != 0) {
                FUN_14075b28();
              }
              if (piVar2[8] != 0) {
                FUN_14075b28();
              }
              FUN_14075b28(piVar2);
              return (int *)0x0;
            }
            uVar5 = uVar6 + 2;
            *local_3c = (int)local_3c + 5;
            FUN_140e5278((int)local_3c + 5,param_2,uVar5);
            *(undefined1 *)(local_3c + 1) = 0x17;
            uVar6 = uVar6 + 2;
            piVar2[8] = (int)local_3c;
          }
          else {
            uVar5 = uVar6 + 2;
            uVar6 = uVar5;
          }
        }
      }
      else {
        if ((cVar1 != '\x03') || ((uVar7 & 4) != 0)) goto LAB_1407c9fa;
        piVar3 = (int *)FUN_140759b8(uVar6 + 7);
        uVar7 = uVar7 | 4;
        if (piVar3 == (int *)0x0) goto LAB_1407cb3e;
        *piVar3 = (int)piVar3 + 5;
        FUN_140e5278((int)piVar3 + 5,param_2,uVar6 + 2);
        if (uVar6 == 3) {
          uVar4 = 0x29;
        }
        else {
          uVar4 = 0x18;
        }
        *(undefined1 *)(piVar3 + 1) = uVar4;
        piVar2[7] = (int)piVar3;
        uVar6 = 5;
        uVar5 = 5;
      }
      uVar8 = uVar6 + uVar8 & 0xffff;
      param_2 = param_2 + uVar5;
      if (param_3 <= (int)(local_44 + uVar8)) {
        return piVar2;
      }
      cVar9 = cVar9 + -1;
      if (cVar9 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_1407cd90,9);
      }
      uVar6 = (uint)(byte)param_2[1];
      cVar1 = *param_2;
    } while ((int)(uVar8 + 2 + uVar6) <= param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x40,DAT_1407cd94);
}

