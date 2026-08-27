/* FUN_2c46df44 @ 0x2c46df44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46df44(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  char acStack_2c [16];
  uint uStack_1c;
  char cStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c46e020;
  uStack_1c = 0;
  cStack_18 = 0;
  acStack_2c[0] = '\0';
  acStack_2c[1] = '\0';
  acStack_2c[2] = '\0';
  acStack_2c[3] = '\0';
  acStack_2c[4] = '\0';
  acStack_2c[5] = '\0';
  acStack_2c[6] = '\0';
  acStack_2c[7] = '\0';
  acStack_2c[8] = '\0';
  acStack_2c[9] = '\0';
  acStack_2c[10] = '\0';
  acStack_2c[0xb] = '\0';
  acStack_2c[0xc] = '\0';
  acStack_2c[0xd] = '\0';
  acStack_2c[0xe] = '\0';
  acStack_2c[0xf] = '\0';
  uVar1 = FUN_2c66c4ec(param_1,param_2,0);
  if (uVar1 < 0x10) {
    uVar1 = uVar1 & 0xff;
    uVar7 = uVar1 - 1 & 0xff;
    if (uVar7 == 0) {
      uVar1 = 1;
      goto LAB_2c46df78;
    }
  }
  else {
    uVar7 = 0xf;
    uVar1 = 0x10;
  }
  do {
    if (*(char *)(param_1 + uVar7) != ' ') break;
    uVar7 = uVar7 - 1 & 0xff;
    uVar1 = uVar1 - 1 & 0xff;
  } while (uVar7 != 0);
LAB_2c46df78:
  FUN_2c674668(acStack_2c,param_1,uVar1);
  iVar2 = 0;
  iVar5 = (int)acStack_2c[0];
  uStack_1c = uStack_1c & 0xffffff00;
  pcVar4 = acStack_2c;
  cVar6 = acStack_2c[0];
  cVar3 = acStack_2c[0];
  cStack_18 = acStack_2c[0];
  cVar8 = acStack_2c[0];
  if (iVar5 != 0) {
    do {
      iVar2 = iVar2 * 0x1505 + iVar5;
      iVar5 = (int)pcVar4[1];
      pcVar4 = pcVar4 + 1;
    } while (iVar5 != 0);
    cVar6 = (char)((uint)iVar2 >> 0x18);
    cVar3 = (char)((uint)iVar2 >> 8);
    cStack_18 = (char)iVar2;
    cVar8 = (char)((uint)iVar2 >> 0x10);
  }
  uStack_1c = (uint)CONCAT12(cVar3,CONCAT11(cVar8,cVar6)) << 8;
  FUN_2c6743a8(_LAB_2c46e024,1,0x15,acStack_2c);
  FUN_2c4f7174(0x30,acStack_2c,0x15);
  if (*_LAB_2c46e020 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

