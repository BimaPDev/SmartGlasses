/* FUN_1400156c @ 0x1400156c */

void FUN_1400156c(undefined4 param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  iVar1 = DAT_140015c0;
  *(uint *)(DAT_140015c0 + 4) =
       DAT_140015c4 & param_3 << 0xc | *(uint *)(DAT_140015c0 + 4) & 0xfe000fff;
  do {
    while (uVar3 = *(uint *)(iVar1 + 0xc), uVar5 = (uVar3 & 0x1fff) >> 8, (uVar3 & 0x1f00) != 0) {
      if (param_3 == 0) {
        return;
      }
      iVar4 = param_3 - 1;
      puVar2 = param_2;
      while( true ) {
        bVar6 = param_3 - uVar5 == iVar4;
        *(undefined1 *)(iVar1 + 8) = *puVar2;
        iVar4 = iVar4 + -1;
        if (bVar6) break;
        puVar2 = puVar2 + 1;
        if (iVar4 == -1) {
          return;
        }
      }
      if (param_3 == uVar5) {
        return;
      }
    }
  } while (param_3 != 0);
  return;
}

