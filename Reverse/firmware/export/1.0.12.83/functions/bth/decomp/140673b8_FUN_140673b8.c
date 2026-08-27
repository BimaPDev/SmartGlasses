/* FUN_140673b8 @ 0x140673b8 */

void FUN_140673b8(undefined2 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined2 *)FUN_14074378(0xb01,param_2,2,10);
  if (puVar2 != (undefined2 *)0x0) {
    uVar3 = (uint)*(byte *)(param_1 + 2);
    if ((uVar3 < 0xb) && (*(char *)(DAT_14067430 + uVar3 * 0xc + 9) == '\x01')) {
      if (*(char *)((int)param_1 + 0x19) == '\0') {
        uVar1 = 0x40;
      }
      else {
        uVar1 = FUN_14066cf0(uVar3,*(undefined1 *)((int)param_1 + 5),param_1 + 3,
                             *(char *)((int)param_1 + 0x19),0,param_1 + 0xd,
                             *(undefined1 *)(param_1 + 0xc),param_1 + 0xb);
      }
    }
    else {
      uVar1 = 0x43;
    }
    puVar2[2] = uVar1;
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 2);
    puVar2[4] = param_1[0xb];
    FUN_140743d0(puVar2);
    return;
  }
  return;
}

