/* FUN_2c47b3c8 @ 0x2c47b3c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47b3c8(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  byte abStack_34 [12];
  undefined1 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c47b4e0;
  iVar2 = FUN_2c46de74();
  iVar9 = 0;
  pbVar3 = (byte *)(iVar2 + 6);
  pbVar6 = abStack_34;
  do {
    while( true ) {
      pbVar3 = pbVar3 + -1;
      bVar1 = *pbVar3 >> 4;
      bVar7 = *pbVar3 & 0xf;
      bVar8 = bVar1 + 0x30;
      if (bVar8 < 0x3a) break;
      *pbVar6 = bVar1 + 0x57;
      if (0x39 < (byte)(bVar7 + 0x30)) goto LAB_2c47b3f2;
LAB_2c47b420:
      iVar9 = iVar9 + 2;
      pbVar6[1] = bVar7 + 0x30;
      pbVar6 = pbVar6 + 2;
      if (iVar9 == 0xc) goto LAB_2c47b42e;
    }
    *pbVar6 = bVar8;
    if ((byte)(bVar7 + 0x30) < 0x3a) goto LAB_2c47b420;
LAB_2c47b3f2:
    iVar9 = iVar9 + 2;
    pbVar6[1] = bVar7 + 0x57;
    pbVar6 = pbVar6 + 2;
  } while (iVar9 != 0xc);
LAB_2c47b42e:
  uStack_28 = 0;
  uVar4 = FUN_2c66b19c();
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  FUN_2c46c9f4(uVar4,&uStack_24,10);
  iVar2 = FUN_2c473be8(0,0,abStack_34,_LAB_2c47b4e4,0,0,0,0,_LAB_2c47b4e8);
  if (iVar2 == 0) {
    FUN_2c6741e8(0x710,_LAB_2c47b4ec);
  }
  else {
    puVar5 = (undefined1 *)FUN_2c47245c(3,1);
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 2;
      FUN_2c674668(puVar5 + 1,iVar2,0);
      FUN_2c47c284(puVar5,1,0);
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(7,iVar2);
    }
  }
  if (*_LAB_2c47b4e0 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

