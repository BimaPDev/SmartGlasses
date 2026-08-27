/* FUN_2c47c284 @ 0x2c47c284 */

void FUN_2c47c284(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  
  pcVar2 = DAT_2c47c428;
  if (*DAT_2c47c428 != '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x145,DAT_2c47c410,DAT_2c47c41c,DAT_2c47c420,DAT_2c47c414,param_2);
  }
  if (param_3 != 0) {
    *DAT_2c47c404 = param_3;
  }
  uVar8 = param_2 + 10U & 0xffff;
  uVar7 = (uint)((ulonglong)DAT_2c47c408 * (ulonglong)uVar8 >> 0x20);
  sVar6 = (short)(uVar7 >> 6);
  if ((uVar8 + (uVar7 >> 6) * -600 & 0xffff) != 0) {
    sVar6 = sVar6 + 1;
  }
  iVar4 = FUN_2c47245c(3,param_2);
  iVar3 = DAT_2c47c42c;
  if (iVar4 == 0) {
    return;
  }
  FUN_2c674668(iVar4,param_1,param_2);
  *(short *)(iVar3 + 0x14) = sVar6;
  *(short *)(iVar3 + 0x16) = sVar6;
  *(int *)(iVar3 + 0xc) = iVar4;
  *(uint *)(iVar3 + 0x10) = uVar8;
  puVar5 = (undefined1 *)FUN_2c47245c(3,600);
  if (puVar5 == (undefined1 *)0x0) {
    FUN_2c6741e8(0x711,DAT_2c47c424,DAT_2c47c414);
    return;
  }
  iVar4 = param_2 + 2;
  puVar5[1] = 0xca;
  puVar5[7] = (char)iVar4;
  puVar5[2] = 0x93;
  *puVar5 = 0xea;
  puVar5[3] = 0x53;
  cVar1 = *pcVar2;
  puVar5[4] = (char)((uint)iVar4 >> 0x18);
  puVar5[5] = (char)((uint)iVar4 >> 0x10);
  puVar5[6] = (char)((uint)iVar4 >> 8);
  puVar5[8] = 0;
  puVar5[9] = 2;
  if (cVar1 == '\0') {
    if (uVar8 < 0x259) {
      FUN_2c674668(puVar5 + 10,param_1,param_2);
      iVar4 = FUN_2c46db90();
      (**(code **)(iVar4 + 0xc))(puVar5,uVar8);
    }
    else {
      FUN_2c674668(puVar5 + 10,param_1,0x24e);
      iVar4 = FUN_2c46db90();
      (**(code **)(iVar4 + 0xc))(puVar5,600);
    }
    sVar6 = *(short *)(iVar3 + 0x16);
    *DAT_2c47c40c = 1;
    *(short *)(iVar3 + 0x16) = sVar6 + -1;
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(3,puVar5);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x168,DAT_2c47c410,DAT_2c47c41c,DAT_2c47c418,DAT_2c47c414,10);
}

