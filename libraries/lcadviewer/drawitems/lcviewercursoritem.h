#ifndef LCVIEWERCURSORITEM_H
#define LCVIEWERCURSORITEM_H

#include <QGraphicsView>
#include <QPainter>

#include "const.h"

class LCViewerCursorItem {
    public:
        virtual void draw(const QGraphicsView* view, QPainter* painter, const QRectF& rect, const QPointF& _mousePosition) = 0;
};

typedef shared_ptr<LCViewerCursorItem> LCViewerCursorItemPtr;

#endif // LCVIEWERCURSORITEM_H
