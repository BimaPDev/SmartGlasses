/* FUN_2c4d6324 @ 0x2c4d6324 */

undefined1 * FUN_2c4d6324(int param_1,int param_2,int param_3,char *param_4)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char cVar8;
  int *piVar9;
  undefined1 auStack_fc [206];
  char local_2e;
  undefined4 local_28;
  int local_24 [2];
  
  local_24[0] = *DAT_2c4d64ec;
  *param_4 = '\0';
  uVar1 = (uint)*(byte *)(param_1 + 4);
  if (param_3 < (int)(uVar1 + *(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 5) +
                     (uint)*(byte *)(param_1 + 6))) {
    puVar7 = (undefined1 *)0x0;
  }
  else if (*(char *)(param_1 + 0xce) == '\0') {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if (*(byte *)(param_1 + 3) != 0) {
      pcVar2 = (char *)(param_1 + 0xf);
      puVar7 = (undefined1 *)0x0;
      iVar3 = param_2 + -1;
      do {
        pcVar2 = pcVar2 + 1;
        puVar7 = puVar7 + 1;
        iVar3 = iVar3 + 1;
        *(bool *)iVar3 = *pcVar2 != '\0';
      } while ((int)puVar7 < (int)(uint)*(byte *)(param_1 + 3));
      uVar1 = (uint)*(byte *)(param_1 + 4);
    }
    if (uVar1 != 0) {
      puVar4 = puVar7 + param_2;
      pcVar2 = (char *)(param_1 + 0x3f);
      puVar6 = puVar4;
      do {
        pcVar2 = pcVar2 + 1;
        puVar7 = puVar6 + (1 - param_2);
        puVar5 = puVar6 + 1;
        *puVar6 = *pcVar2 != '\0';
        puVar6 = puVar5;
      } while ((int)puVar5 - (int)puVar4 < (int)(uint)*(byte *)(param_1 + 4));
    }
    if (*(char *)(param_1 + 5) != '\0') {
      puVar4 = puVar7 + param_2;
      pcVar2 = (char *)(param_1 + 0x6f);
      puVar6 = puVar4;
      do {
        pcVar2 = pcVar2 + 1;
        puVar7 = puVar6 + (1 - param_2);
        puVar5 = puVar6 + 1;
        *puVar6 = *pcVar2 != '\0';
        puVar6 = puVar5;
      } while ((int)puVar5 - (int)puVar4 < (int)(uint)*(byte *)(param_1 + 5));
    }
    if (*(char *)(param_1 + 6) != '\0') {
      puVar4 = puVar7 + param_2;
      puVar6 = puVar4;
      do {
        puVar7 = puVar6 + (1 - param_2);
        puVar5 = puVar6 + 1;
        *puVar6 = 3;
        puVar6 = puVar5;
      } while ((int)puVar5 - (int)puVar4 < (int)(uint)*(byte *)(param_1 + 6));
    }
    switch(*(char *)(param_1 + 0xce)) {
    case '\x01':
    case '\x02':
      *param_4 = *(char *)(param_1 + 0xce);
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      FUN_2c4d58e4(auStack_fc);
      iVar3 = FUN_2c66960c(param_1,auStack_fc,0xd1);
      cVar8 = *(char *)(param_1 + 0xce);
      if ((iVar3 != 0) &&
         ((cVar8 != local_2e || (uVar1 = FUN_2c4d4938(param_1,auStack_fc), (uVar1 & 0xe) != 0)))) {
        cVar8 = '\0';
      }
      *param_4 = cVar8;
      break;
    case '\a':
      FUN_2c4d58e4(auStack_fc,0xb);
      iVar3 = FUN_2c66960c(param_1,auStack_fc,0xd1);
      if (iVar3 == 0) {
        *param_4 = '\v';
        break;
      }
      if (*(char *)(param_1 + 0xce) == local_2e) {
        uVar1 = FUN_2c4d4938(param_1,auStack_fc);
        if ((uVar1 & 0xe) == 0) {
          cVar8 = '\v';
        }
        else {
          cVar8 = '\0';
        }
        *param_4 = cVar8;
        break;
      }
    default:
      *param_4 = '\0';
      break;
    case '\b':
      piVar9 = &local_28;
      cVar8 = ' ';
      local_28 = DAT_2c4d64f0;
      while( true ) {
        piVar9 = (int *)((int)piVar9 + 1);
        FUN_2c4d58e4(auStack_fc,cVar8);
        iVar3 = FUN_2c66960c(param_1,auStack_fc,0xd1);
        if ((iVar3 == 0) ||
           ((*(char *)(param_1 + 0xce) == local_2e &&
            (uVar1 = FUN_2c4d4938(param_1,auStack_fc), (uVar1 & 0xe) == 0)))) {
          if (cVar8 == ' ') {
            cVar8 = '\f';
          }
          *param_4 = cVar8;
        }
        if (local_24 == piVar9) break;
        cVar8 = *(char *)piVar9;
      }
    }
  }
  if (*DAT_2c4d64ec == local_24[0]) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

