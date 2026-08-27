/* FUN_140345d0 @ 0x140345d0 */

void FUN_140345d0(void)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  piVar1 = DAT_1403465c;
  iVar2 = *DAT_1403465c;
  if (iVar2 == 0) {
    FUN_1402e55c();
    iVar2 = *piVar1;
  }
  puVar3 = (undefined1 *)*DAT_14034660;
  if (puVar3 != (undefined1 *)0x0) {
    puVar3[0x14] = 3;
    puVar3[0x15] = 3;
    *(undefined4 *)(puVar3 + 0x1c) = 3;
    puVar3[0x25] = 0xa6;
    puVar3[0x27] = 0xa6;
    puVar3[0x2d] = 0xa6;
    *(undefined4 *)(puVar3 + 8) = 100;
    *(undefined4 *)(puVar3 + 0x20) = 100;
    *(undefined4 *)(puVar3 + 0x10) = 0x160;
    *(undefined2 *)(puVar3 + 0x2e) = 0x14;
    *(undefined4 *)(puVar3 + 0xc) = 5;
    *puVar3 = 1;
    puVar3[0x18] = 1;
    *(undefined4 *)(puVar3 + 4) = 0x50;
    *(undefined2 *)(puVar3 + 0x28) = 0x50;
    puVar3[0x16] = 0x9c;
    puVar3[0x17] = 0x9c;
    puVar3[0x26] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x24] = 2;
    *(undefined2 *)(puVar3 + 0x30) = 800;
    *(undefined2 *)(puVar3 + 0x2a) = 200;
  }
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}

