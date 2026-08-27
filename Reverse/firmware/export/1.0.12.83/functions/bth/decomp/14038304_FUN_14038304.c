/* FUN_14038304 @ 0x14038304 */

void FUN_14038304(void)

{
  int iVar1;
  
  iVar1 = DAT_140383c8;
  *(uint *)(DAT_140383c8 + 0xc0c) = *(uint *)(DAT_140383c8 + 0xc0c) & 0xffff07ff | 0xf800;
  *(uint *)(iVar1 + 0xc18) = *(uint *)(iVar1 + 0xc18) & 0xfffffffe;
  *(uint *)(iVar1 + 0xc80) = *(uint *)(iVar1 + 0xc80) & 0xfffc7fff;
  *(uint *)(iVar1 + 0xc80) = *(uint *)(iVar1 + 0xc80) & 0xfffff1ff;
  *(uint *)(iVar1 + 0xc80) = *(uint *)(iVar1 + 0xc80) & 0xfffffffd | 2;
  *(uint *)(iVar1 + 0xc8c) = *(uint *)(iVar1 + 0xc8c) & 0xdfffffff;
  *(uint *)(iVar1 + 0xc18) = *(uint *)(iVar1 + 0xc18) & 0xfffffeff;
  *(uint *)(iVar1 + 0xc8c) = *(uint *)(iVar1 + 0xc8c) & 0xbfffffff;
  return;
}

