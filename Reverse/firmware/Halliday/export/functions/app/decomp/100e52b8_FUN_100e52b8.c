/* FUN_100e52b8 @ 0x100e52b8 */

void FUN_100e52b8(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char acStack_38 [20];
  
  FUN_100e4fc0(0xffffffff,0xffffffff);
  puVar4 = (undefined4 *)FUN_100e4ed0(param_1,param_2);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_100a5b78(DAT_100e53e8 | (DAT_100e53e0 - DAT_100e53e4) * 0x20 & 0xff00U,DAT_100e53ec);
  }
  else {
    cVar2 = *(char *)((int)puVar4 + 0xb);
    iVar10 = puVar4[1];
    *(char *)((int)puVar4 + 0xb) = cVar2 + '\x01';
    uVar3 = DAT_100e53f0;
    if (iVar10 == 0) {
      uVar7 = 0;
    }
    else {
      uVar6 = 0;
      uVar7 = 0;
      while( true ) {
        uVar5 = uVar6 & 0xff;
        if (*(char *)(iVar10 + uVar5) == '\0') break;
        if (*(char *)(iVar10 + uVar5) == '/') {
          if (uVar5 != 0) {
LAB_100e5370:
            uVar7 = uVar7 + 1 & 0xff;
          }
        }
        else if (uVar5 == 0) goto LAB_100e5370;
        uVar6 = uVar6 + 1;
      }
    }
    if ((int)(char)(cVar2 + '\x01') < (int)uVar7) {
      if (iVar10 != 0) {
        uVar6 = 0;
        uVar7 = 0;
        cVar11 = '\0';
        iVar9 = DAT_100e53e0 - DAT_100e53e4;
        while( true ) {
          uVar5 = uVar6 & 0xff;
          cVar1 = *(char *)(iVar10 + uVar5);
          if ((cVar1 == '\0') || (cVar2 == -2)) break;
          if (cVar1 == '/') {
            if (uVar5 != 0) {
              cVar11 = cVar11 + '\x01';
            }
          }
          else {
            if (uVar5 == 0) {
              cVar11 = cVar11 + '\x01';
            }
            if ((char)(cVar2 + '\x02') == cVar11) {
              if (uVar7 < 0xf) {
                acStack_38[uVar7] = cVar1;
                uVar7 = uVar7 + 1 & 0xff;
              }
              else {
                FUN_100a5b78(iVar9 * 0x20 & 0xff00U | 0xe40011,uVar3);
              }
            }
          }
          uVar6 = uVar6 + 1;
        }
        acStack_38[uVar7] = '\0';
      }
      FUN_100e4f38(puVar4,acStack_38);
      *(undefined1 *)((int)puVar4 + 10) = 4;
    }
    else {
      *(byte *)(puVar4 + 5) = *(byte *)(puVar4 + 5) | 4;
      *(undefined1 *)((int)puVar4 + 10) = 3;
      if ((puVar4[6] != 0) && (pcVar8 = *(code **)(puVar4[6] + 0xc), pcVar8 != (code *)0x0)) {
        (*pcVar8)(*puVar4,*(undefined1 *)((int)puVar4 + 9));
      }
    }
  }
  FUN_100e4fb4();
  return;
}

