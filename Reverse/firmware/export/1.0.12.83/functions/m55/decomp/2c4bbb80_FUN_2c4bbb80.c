/* FUN_2c4bbb80 @ 0x2c4bbb80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bbb80(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = _LAB_2c4bbe80;
  iVar5 = *(int *)(_LAB_2c4bbe2c + param_1 * 0xc);
  uVar3 = (uint)*(byte *)(_LAB_2c4bbe80 + param_1 * 0x70 + 0xe);
  iVar4 = uVar3 * 0x30 + param_1 * 0x70 + _LAB_2c4bbe80;
  iVar1 = *(int *)(iVar4 + 0x38);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x3c9,_LAB_2c4bbe34,_LAB_2c4bbe3c,_LAB_2c4bbe38,_LAB_2c4bbe30,param_1,iVar1);
  }
  if (*(char *)(iVar4 + 0x24) != '\0') {
    *(undefined4 *)(iVar5 + 0x30) = 0;
    *(uint *)(iVar5 + 0x6c) = *(uint *)(iVar5 + 0x6c) & 0xfffffffe;
  }
  iVar1 = param_1 * 0x70;
  if ((int)((uint)*(byte *)(iVar2 + param_1 * 0x70 + 1) << 0x1f) < 0) {
    *(undefined1 *)(iVar2 + iVar1 + (uVar3 + 1) * 0x30) = 1;
  }
  else {
    iVar4 = iVar1 + uVar3 * 0x30 + iVar2;
    if (*(code **)(iVar4 + 0x3c) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4bbed0,param_1);
    }
    (**(code **)(iVar4 + 0x3c))
              (param_1,*(undefined4 *)(iVar1 + (uVar3 + 1) * 0x30 + iVar2 + 4),
               *(undefined4 *)(iVar4 + 0x10),
               (uint)*(ushort *)(iVar4 + 0x18) * (uint)*(ushort *)(iVar4 + 0x1c),
               *(undefined4 *)(iVar4 + 0x14),
               (uint)*(ushort *)(iVar4 + 0x1c) * (uint)*(ushort *)(iVar4 + 0x1a),
               *(undefined4 *)(iVar4 + 0x38));
  }
  iVar2 = iVar2 + param_1 * 0x70;
  if (*(char *)(iVar2 + 0xf) != '\0') {
    *(char *)(iVar2 + 0xf) = *(char *)(iVar2 + 0xf) + -1;
    *(byte *)(iVar2 + 0xe) = *(char *)(iVar2 + 0xe) + 1U & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4bbed8,_LAB_2c4bbed4,param_1);
}

