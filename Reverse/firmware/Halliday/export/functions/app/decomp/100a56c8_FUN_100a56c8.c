/* FUN_100a56c8 @ 0x100a56c8 */

void FUN_100a56c8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_1011a09e(DAT_100a572c);
  iVar2 = DAT_100a5730;
  FUN_10119dc2(DAT_100a5738,DAT_100a5734,uVar1);
  FUN_100a5538(iVar2);
  FUN_100a61d0();
  *(undefined1 *)(iVar2 + 2) = 2;
  iVar2 = FUN_10112e84(DAT_100a573c);
  uVar1 = DAT_100a5744;
  if (iVar2 == 0) {
    FUN_10119dc2(DAT_100a5740);
    return;
  }
  FUN_10119dc2(DAT_100a5748,DAT_100a5744,0x4000);
  (*(code *)**(undefined4 **)(iVar2 + 8))(iVar2,(code *)**(undefined4 **)(iVar2 + 8),0,0,uVar1);
  return;
}

