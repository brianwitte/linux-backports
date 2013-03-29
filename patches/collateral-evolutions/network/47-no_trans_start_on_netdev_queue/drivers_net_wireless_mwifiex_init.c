--- a/drivers/net/wireless/mwifiex/init.c
+++ b/drivers/net/wireless/mwifiex/init.c
@@ -371,8 +371,10 @@
 {
 	int i;
 
+#if (LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,31))
 	for (i = 0; i < dev->num_tx_queues; i++)
 		netdev_get_tx_queue(dev, i)->trans_start = jiffies;
+#endif
 
 	dev->trans_start = jiffies;
 }