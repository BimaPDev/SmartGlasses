/* FUN_1407c0ac @ 0x1407c0ac */

undefined1 * FUN_1407c0ac(int param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  
  uVar3 = DAT_1407c1b0;
  uVar2 = DAT_1407c1ac;
  uVar8 = DAT_1407c1a8;
  if (param_2 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  uVar12 = 0xffffffff;
  puVar13 = (undefined1 *)0x0;
  do {
    while( true ) {
      puVar11 = param_2;
      iVar7 = *(int *)(puVar11 + 8);
      cVar1 = puVar11[1];
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_1407c1a4,*puVar11,cVar1,param_4);
      }
      if (*(char *)(param_1 + 6) != cVar1) {
        if (cVar1 != '\x01') {
          uVar8 = uVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_1407c1a0,uVar3,uVar8,param_4);
      }
      pbVar4 = (byte *)FUN_1407a718(*(undefined4 *)(param_1 + 0x68),*(undefined1 *)(iVar7 + 3),
                                    iVar7 + 4);
      if (pbVar4 != (byte *)0x0) break;
LAB_1407c0e2:
      param_2 = *(undefined1 **)(puVar11 + 0xc);
      if (*(undefined1 **)(puVar11 + 0xc) == (undefined1 *)0x0) {
        return puVar13;
      }
    }
    pcVar9 = *(char **)(*(int *)(pbVar4 + 8) + 2);
    if (((((*pcVar9 == ':') && (pcVar9[1] == '\x05')) && (pcVar9[2] == '\0')) &&
        ((pcVar9[3] == '\0' && (pcVar9[4] == '5')))) && (pcVar9[5] == 'L')) {
      bVar6 = pbVar4[4];
      uVar10 = (uint)bVar6;
      if (((int)uVar12 <= (int)uVar10) && ((int)uVar10 < param_3)) {
        pbVar5 = *(byte **)(param_1 + 0x6c);
        if (pbVar5 != pbVar4) {
          if (pbVar5 != (byte *)0x0) {
            *pbVar5 = *pbVar5 & 0xfd;
          }
          *(byte **)(param_1 + 0x6c) = pbVar4;
          bVar6 = pbVar4[4];
        }
        *(byte *)(param_1 + 0x70) = bVar6;
        uVar12 = uVar10;
        puVar13 = puVar11;
      }
      goto LAB_1407c0e2;
    }
    bVar6 = pbVar4[4];
    uVar10 = (uint)bVar6;
    if (((int)uVar10 <= (int)uVar12) || (param_3 <= (int)uVar10)) goto LAB_1407c0e2;
    pbVar5 = *(byte **)(param_1 + 0x6c);
    if (pbVar5 != pbVar4) {
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *pbVar5 & 0xfd;
      }
      *(byte **)(param_1 + 0x6c) = pbVar4;
      bVar6 = pbVar4[4];
    }
    *(byte *)(param_1 + 0x70) = bVar6;
    param_2 = *(undefined1 **)(puVar11 + 0xc);
    uVar12 = uVar10;
    puVar13 = puVar11;
    if (*(undefined1 **)(puVar11 + 0xc) == (undefined1 *)0x0) {
      return puVar11;
    }
  } while( true );
}

