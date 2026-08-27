/* FUN_14098558 @ 0x14098558 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14098558(int param_1)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = *_LAB_140985e8;
  FUN_140e5588(*(undefined1 *)(param_1 + 0x7c),&local_14,&local_10,0);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    local_14 = local_14 << 1;
  }
  else if (*(char *)(param_1 + 0x80) == '\x02') {
    local_14 = local_14 << 2;
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar2 = extraout_r1;
  if ((uVar4 <= local_10) && (uVar2 = *(uint *)(param_1 + 0x14), local_10 < uVar4 + uVar2)) {
    uVar5 = uVar2 >> 2;
    if (local_14 <= uVar2 >> 2) {
      uVar3 = (local_10 - uVar4) / uVar5;
      uVar2 = uVar3 & 0xff;
      if ((local_10 - uVar4) - uVar5 * uVar3 < uVar5 - local_14) {
        if (uVar2 == 0) {
          uVar2 = 3;
        }
        else {
          uVar2 = uVar2 - 1 & 0xff;
        }
      }
      iVar1 = uVar2 * uVar5 + uVar4 + (uVar5 - local_14);
      goto LAB_140985bc;
    }
  }
  iVar1 = 0;
LAB_140985bc:
  if ((*_LAB_140985e8 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(iVar1,uVar2,*_LAB_140985e8 ^ local_c,0);
}

